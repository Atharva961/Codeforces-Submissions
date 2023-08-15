#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<vector<char>> grid(8, vector<char>(8));
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                char temp;
                cin>>temp;
                grid[i][j] = temp;
            }
        }

        bool flag = true;
        for(int i=0; i<grid.size(); i++)
        {
            int r = 0;
            for(char c:grid[i])
            {
                if(c=='R')r++;
            }
            if(r==8)
            {
                flag = false;
                cout<<"R"<<endl;
                break;
            }
        }

        if(!flag)continue;

        for(int i=0; i<8; i++)
        {
            int b = 0;
            for(int j=0; j<8; j++)
            {
                if(grid[j][i]=='B')b++;
            }
            if(b==8)
            {
                cout<<"B"<<endl;
                break;
            }
        }
    }   
    return 0;
}