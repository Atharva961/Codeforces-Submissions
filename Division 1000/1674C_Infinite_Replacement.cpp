#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        string s, b;
        cin>>s>>b;

        if(b == "a")
        {
            cout<<1<<endl;
            continue;
        }

        bool flag = false;
        for(long long i=0; i<b.size(); i++)
        {
            if(b[i] == 'a')
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout<<-1<<endl;
            continue;
        }

        long long N = s.length();

        if(N == 1)
        {
            cout<<2<<endl;
            continue;
        }

        vector<long long> prev = {1, 1};

        long long ans = 2;
        for(long long i=2; i<=N; i++)
        {
            vector<long long> temp(i+1, 1);
            for(long long j=1; j<i; j++)
            {
                temp[j] = prev[j-1] + prev[j];
                if(i == N)
                {
                    ans+=temp[j];
                }
            }
            prev = temp;
        }

        cout<<ans<<endl;
    }   
    return 0;
}