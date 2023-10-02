#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m;
        cin>>m;

        vector<vector<int>> v;
        unordered_map<int, int> mp;

        for(int i=0; i<m; i++)
        {
            int n;
            cin>>n;
            vector<int> t;

            for(int j=0; j<n; j++)
            {
                int temp;
                cin>>temp;
                mp[temp] = i;
                t.push_back(temp);
            }
            v.push_back(t);
        }

        vector<int> ans;

        for(int i=0; i<v.size(); i++)
        {
            for(int j:v[i])
            {
                if(mp[j] == i)
                {
                    ans.push_back(j);
                    break;
                }
            }
        }

        if(ans.size() == m)
        {
            for(int i:ans)cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }   
    return 0;
}