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
        int ans = 0;
        if(s=="^")
        {
            cout<<1<<endl;
            continue;
        }
        if(s[0]=='_')ans+=1;

        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='_')
            {
                if(s[i-1]=='_')ans+=1;
            }
        }
        if(s[s.size()-1]=='_')ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}

// _ _ _^ _ ^ ^ ^ _ ^ _ _ _ ^