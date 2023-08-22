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
        int minn = INT_MAX;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            minn = min(minn, temp);
            ans+=(temp)/(minn*2 - 1);
        }

        cout<<ans<<endl;
    }   
    return 0;
}