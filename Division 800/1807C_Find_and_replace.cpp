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

        unordered_map<char, int> prev;

        bool flag = false;
        for(int i=0; i<s.size(); i++)
        {
            if(prev.find(s[i]) != prev.end())
            {
                if(prev[s[i]]%2 != i%2)
                {
                    flag = true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            prev[s[i]] = i;
        }

        if(!flag)cout<<"YES"<<endl;
    }
    return 0;
}