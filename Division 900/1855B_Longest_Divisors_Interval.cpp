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

        if(n%2!=0)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            long long ans = 1;

            for(long long i=2; i<=n; i++)
            {
                if(n%i==0)ans++;
                else break;
            }
        }
    }   
    return 0;
}