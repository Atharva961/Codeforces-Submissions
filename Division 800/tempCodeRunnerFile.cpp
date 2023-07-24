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

        unordered_map<int, int> m;

        for(char c:s)m[c-'0']++;

        if(m.size()==1)
        {
            cout<<-1<<endl;
            continue;
        }

        if(m.size()>=3)
        {
            cout<<4<<endl;
            continue;
        }

        vector<int> v;

        for(auto i:m)v.push_back(i.second);

        if(v[0]==3 || v[1]==3)
        {
            cout<<6<<endl;
            continue;
        }

        cout<<4<<endl;
    }
    return 0;
}