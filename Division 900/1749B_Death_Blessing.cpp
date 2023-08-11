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

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            ans+=temp;
        }

        int maxx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            ans+=temp;
            maxx = max(maxx, temp);
        }

        ans-=maxx;
        cout<<ans<<endl;
    }
    return 0;
}