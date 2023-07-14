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

        vector<int> ent, dur;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            dur.push_back(temp);
        }

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            ent.push_back(temp);
        }

        int ans = -1, maxx = 0;

        for(int i=0; i<n; i++)
        {
            if(i + dur[i]<=k)
            {
                if(ent[i]>maxx)
                {
                    ans = i;
                    maxx = ent[i];
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}