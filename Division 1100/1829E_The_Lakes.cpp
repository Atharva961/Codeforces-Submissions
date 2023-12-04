#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>& grid, int i, int j)
{
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())return 0;
    if(grid[i][j] == 0)return 0;

    int ans = grid[i][j];
    grid[i][j] = 0;

    return ans + solve(grid, i-1, j) + solve(grid, i+1, j) + solve(grid, i, j-1) + solve(grid, i, j+1);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        vector<vector<int>> grid;

        for(int i=0; i<n; i++)
        {
            vector<int> temp;
            for(int j=0; j<m; j++)
            {
                int tem;
                cin>>tem;
                temp.push_back(tem);
            }
            grid.push_back(temp);
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]!=0)
                {
                    ans = max(ans, solve(grid, i, j));
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}