#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, k, g;
        cin>>n>>k>>g;

        if(g == 2 || n == 2)
        {
            cout<<0<<endl;
            continue;
        }

        
        long long ans = min((g-1)/2*n, k*g);
        long long left = (k*g - ans)%g;


        if(left >= (g-1)/2)
        {
            ans-=(g - left);
        }
        else ans+=left;

        cout<<ans<<endl;
    }
    return 0;
}