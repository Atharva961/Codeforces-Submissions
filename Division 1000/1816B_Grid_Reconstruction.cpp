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

        vector<vector<int>> v(2, vector<int>(n, 0));

        v[0][0] = n*2;
        v[1][n-1] = n*2-1;

        int col = 1;
        int ptr = 1;
        for(int i=0; i<n; i++)
        {
            v[col][i] = ptr;
            col = !col;
            ptr++;
        }

        col = 1;
        for(int i=1; i<n-1; i++)
        {
            v[col][i] = ptr;
            col = !col;
            ptr++;
        }

        for(auto i:v)
        {
            for(int j:i)cout<<j<<" ";
            cout<<endl;
        }
    }   
    return 0;
}