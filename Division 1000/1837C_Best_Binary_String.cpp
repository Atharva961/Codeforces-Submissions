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

        string ans = "";

        char sign = '0';

        for(char c:s)
        {
            if(c=='?')ans.push_back(sign);
            else sign = c;
        }

        cout<<ans<<endl;
    }   
    return 0;
}