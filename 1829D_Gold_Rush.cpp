#include<bits/stdc++.h>
using namespace std;

bool solve(int n, int m)
{
    if(n<m)return false;
    if(n==m)return true;
    int div = n/3;
    int rem = n%3;
    if(rem!=0)return false;
    int small = solve(n/3 , m);
    int large = solve(2*n/3, m);
    return small||large;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        bool ans = solve(n, m);
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}