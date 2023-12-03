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

        unordered_map<long long, priority_queue<long long>> m;
        long long ans = 0;

        for(long long i=0; i<n; i++)
        {
            long long a, b;
            cin>>a>>b;
            m[a].push(b);
        }

        for(auto i:m)
        {
            long long val = i.first;
            priority_queue<long long> pq = i.second;
            while(!pq.empty() && val--)
            {
                ans+=pq.top();
                pq.pop();
            }   
        }

        cout<<ans<<endl;
    }
    return 0;
}