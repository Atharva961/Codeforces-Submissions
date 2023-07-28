#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int> v1, v2;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }

        for(int j=0; j<n; j++)
        {
            int temp;
            cin>>temp;
            v2.push_back(temp);
        }

        vector<int> org = v1;

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        unordered_map<int, vector<int>> m;

        for(int i=0; i<v1.size(); i++)
        {
            m[v1[i]].push_back(v2[i]);
        }

        vector<int> ans;

        for(int i:org)
        {
            ans.push_back(m[i].back());
            m[i].pop_back();
        }

        for(int i:ans)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}