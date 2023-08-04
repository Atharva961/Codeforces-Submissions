#include<bits/stdc++.h>
using namespace std;

long long MOD = pow(10, 9) + 7;

long long factorial(int n)
{
    long long ans = 1;
    for(int i=2; i<=n; i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        long long num = 1LL * n * (n-1);
        long long f = factorial(n);

        long long ans = (num%MOD * f%MOD)%MOD;

        cout<<ans<<endl;
    }   
    return 0;
}