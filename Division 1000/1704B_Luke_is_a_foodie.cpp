#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        cin>>n>>x;

        int minn = 1000000001, maxx = 0;
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            minn = min(minn, temp);
            maxx = max(maxx, temp);
            if(maxx - minn > 2 * x)
            {
                ans++;
                minn = temp;
                maxx = temp;
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}