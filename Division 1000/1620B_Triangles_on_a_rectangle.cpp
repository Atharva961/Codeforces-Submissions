#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long w, h;
        cin>>w>>h;

        long long ans = 0;

        for(long long i=0; i<4; i++)
        {
            long long n;
            cin>>n;

            long long beg = -1, end = -1;
            for(long long j=0; j<n; j++)
            {
                long long temp;
                cin>>temp;
                if(beg == -1)beg = temp;
                end = temp;
            }

            if(i < 2)
            {
                ans = max(ans, (end - beg)*h);
            }
            else
            {
                ans = max(ans, (end - beg)*w);
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}