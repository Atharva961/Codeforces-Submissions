#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        unordered_map<int, int> m;

        for(int i=1; i<=n; i++)
        {
            if(m[i])continue;
            cout<<i<<" ";
            m[i] = 1;
            for(int j=i*2; j<=n; j*=2)
            {
                if(!m[j])
                {
                    cout<<j<<" ";
                    m[j] = 1;
                }
            }
        }

        cout<<endl;
    }   
    return 0;
}