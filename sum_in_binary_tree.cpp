#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans = n;
        while(n)
        {
            n/=2;
            ans+=n;
        }
        cout<<ans<<endl;
    }
    return 0;
}