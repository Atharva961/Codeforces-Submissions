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

        string m1;
        cin>>m1;
        int ans = 1;

        for(int i=0; i<n-1; i++)
        {
            string temp;
            cin>>temp;
            if(temp==m1)ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}