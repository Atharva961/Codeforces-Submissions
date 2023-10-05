#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            pq.push(temp);
        }

        for(int i=0; i<m; i++)
        {
            int temp;
            cin>>temp;
            pq.pop();
            pq.push(temp);
        }

        long long ans = 0;

        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }

        cout<<ans<<endl;
    }   
    return 0;
}