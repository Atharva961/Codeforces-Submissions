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

        string st = s.substr(0, 2);

        if(st=="ab")
        {
            cout<<'a'<<" ";

            bool a = false;
            for(int i=1; i<s.size(); i++)if(s[i]=='a')a = true;

            if(a)
            {
                bool flag = true;
                for(int i=1; i<s.size(); i++)
                {
                    if(s[i]=='a' && flag)
                    {
                        cout<<" ";
                        flag = false;
                    }
                    cout<<s[i];
                }
            }
            else
            {
                for(int i=1; i<s.size(); i++)
                {
                    if(i==s.size()-1)cout<<" ";
                    cout<<s[i];
                }
            }
        }
        else
        {
            cout<<s[0]<<" "<<s[1]<<" ";
            for(int i=2; i<s.size(); i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }   
    return 0;
}