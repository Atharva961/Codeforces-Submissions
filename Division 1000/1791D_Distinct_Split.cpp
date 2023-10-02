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

        unordered_map<char, int> m;
        set<char> s1;

        for(char c:s)
        {
            m[c]++;
            s1.insert(c);
        }

        int ans = s1.size();
        set<char> s2;

        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]--;
            s2.insert(s[i]);
            if(m[s[i]] == 0)
            {
                s1.erase(s[i]);
            }
            ans = max(ans, int(s1.size() + s2.size()));
        }

        cout<<ans<<endl;
    }   
    return 0;
}