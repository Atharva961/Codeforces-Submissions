#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        long long maxx = INT_MIN, minn = INT_MAX;
        unordered_map<long long, long long> m;

        for(int i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            m[temp]++;
            maxx = max(maxx, temp);
            minn = min(minn, temp);
        }

        if(maxx!=minn)
        {
            long long ans = 1LL*2*m[maxx]*m[minn];
            cout<<ans<<endl;
        }
        else
        {
            long long val = m[maxx];
            cout<<1LL*val*(val-1)/2<<endl;
        }
    }   
    return 0;
}