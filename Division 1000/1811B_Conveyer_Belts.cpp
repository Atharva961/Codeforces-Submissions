#include<bits/stdc++.h>
using namespace std;

long long dist(int n, int i, int j)
{
    return min(i-1, min(n-i, min(j-1, n-j)));
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, i, j, k, l;
        cin>>n>>i>>j>>k>>l;
        long long ans = abs(dist(n, i, j) - dist(n, k, l));
        cout<<ans<<endl;
    }   
    return 0;
}