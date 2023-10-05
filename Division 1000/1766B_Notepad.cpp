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

        unordered_map<string, vector<int>> m;

        string ans = "NO";

        for(int i=0; i<s.size()-1; i++)
        {
            string pair = "";
            pair.push_back(s[i]);
            pair.push_back(s[i+1]);
            int sz = m[pair].size();

            if(sz)
            {
                if(sz>=2)ans = "YES";
                else if(m[pair][sz-1] < i - 1)ans = "YES";
            }

            m[pair].push_back(i);
        }

        cout<<ans<<endl;
    }   
    return 0;
}