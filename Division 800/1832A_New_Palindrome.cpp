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
        int n = s.size();

        bool flag = true;
        for(int i=1; i<n/2; i++)
        {
            if(s[i]!=s[i-1])
            {
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
    }
    return 0;
}