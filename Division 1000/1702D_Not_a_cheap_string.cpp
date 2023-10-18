#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int x;
        cin>>x;

        priority_queue<char> pq;
        unordered_map<char, int> m;

        int total = 0;
        for(char c:s)
        {
            pq.push(c);
            total+=((c-'a')+1);
            m[c]++;
        }

        while(!pq.empty() && total>x)
        {
            char c = pq.top();
            pq.pop();
            total-=((c-'a')+1);
            m[c]--;
        }

        string ans = "";

        for(char c:s)
        {
            if(m[c])
            {
                ans.push_back(c);
                m[c]--;
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}