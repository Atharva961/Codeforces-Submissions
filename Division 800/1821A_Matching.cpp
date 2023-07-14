#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s[0]=='0')
        {
            cout<<0<<endl;
            continue;
        }

        int ans = 1;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?')
            {
                if(i==0)ans*=9;
                else ans*=10;
            }
        }

        if(ans==1)ans = 0;

        cout<<ans<<endl;
    }
    return 0;
}