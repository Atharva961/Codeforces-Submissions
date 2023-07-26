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

        int ans = -1, maxx = 0;

        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;

            if(b>maxx && a<=10)
            {
                ans = i+1;
                b = maxx;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}