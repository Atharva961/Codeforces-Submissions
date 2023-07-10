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

        int mine = INT_MAX, mino = INT_MAX;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp%2==0)mine = min(mine, temp);
            else mino = min(mino, temp);
        }

        if(mino==INT_MAX)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(mino > mine)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}