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
        string s;
        cin>>s;

        int pos = -1;

        for(int i=0; i<s.size(); i++)
        {
            if(k > s[i] - '0')pos = i;
        }

        if(pos==-1)
        {
            cout<<s + to_string(k)<<endl;
        }
        else
        {
            s.insert(s.begin() + pos, k + '0');
            cout<<s<<endl;
        }
    }
    return 0;
}