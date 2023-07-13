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

        set<char> st(s.begin(), s.end());

        if(st.size()>1)cout<<s.size()-1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}