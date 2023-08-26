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

        string s;
        cin>>s;

        int first_index = -1;

        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]>s[i+1])
            {
                first_index=i;
                break;
            }
        }

        if(first_index==-1)
        {
            cout<<0<<endl;
            continue;
        }

        int ans = 0;

        for(int i=first_index; i<s.size()-1; i++)
        {
            if(s[i]!=s[i+1])ans++;
        }

        cout<<ans<<endl;
    }   
    return 0;
}