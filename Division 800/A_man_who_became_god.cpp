#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    int k;
    cin>>t;
    int temp;
    vector<int> v;

    while(t--)
    {
        v.clear();
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        priority_queue<int> q;

        for(int i=1; i<v.size(); i++)
        {
            q.push(abs(v[i] - v[i-1]));
        }
        k--;
        while(k--)
        {
            q.pop();
        }
        int ans = 0;
        while(!q.empty())
        {
            ans+=q.top();
            q.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}