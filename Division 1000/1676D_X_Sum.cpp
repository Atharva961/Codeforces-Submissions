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

        vector<vector<int>> grid;

        unordered_map<int, int> acute, obtuse;

        for(int i=0; i<n; i++)
        {
            vector<int> t;
            for(int j=0; j<m; j++)
            {
                int temp;
                cin>>temp;
                obtuse[i-j]+=temp;
                acute[i+j]+=temp;
                t.push_back(temp);
            }
            grid.push_back(t);
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans = max(ans, obtuse[i-j] + acute[i+j] - grid[i][j]);
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}