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

        if(n %2 == 1 && k == 1)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++)cout<<i<<endl;
            continue;
        }
        else if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        vector<vector<int>> v(n, vector<int>(k));

        int ptr = 1;

        for(int i=0; i<n; i+=2)
        {
            v[i][0] = ptr;
            v[i+1][0] = ptr+1;
            ptr+=(k*2);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=1; j<k; j++)
            {
                v[i][j] = 2 + v[i][j-1];
            }
        }

        for(auto i:v)
        {
            for(auto j:i)cout<<j<<" ";
            cout<<endl;
        }
    }   

    return 0;
}