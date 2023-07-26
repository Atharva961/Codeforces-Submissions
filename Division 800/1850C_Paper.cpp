#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char mat[8][8];

        bool flag = false;
        int i0 = -1, j0 = -1;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]!='.' && !flag)
                {   
                    i0 = i;
                    j0 = j;
                    flag = true;
                }
            }
        }

        string ans = "";
        for(int i=i0; i<8; i++)
        {
            if(mat[i][j0]=='.')break;
            ans.push_back(mat[i][j0]);
        }


        cout<<ans<<endl;
    }
    return 0;
}