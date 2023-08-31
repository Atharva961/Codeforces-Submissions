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

        vector<vector<int>> v(n, vector<int>(m));
        
        int start_val = 1;
        for(int i=0; i<n; i+=2)
        {
            int val = start_val;
            for(int j=0; j<m; j+=2)
            {
                v[i][j] = val;
                v[i+1][j+1] = val;
                v[i+1][j] = !val;
                v[i][j+1] = !val;
                val = !val;
            }
            start_val = !start_val;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}