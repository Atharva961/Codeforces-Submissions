#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        priority_queue<int> pq;

        long long ans = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp)pq.push(temp);
            else if(!pq.empty())
            {
                ans+=(long long)pq.top();
                pq.pop();
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}