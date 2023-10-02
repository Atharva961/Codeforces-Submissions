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

        string lower = "abcdefghijklmnopqrstuvwxyz";
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        unordered_map<char, int> m;
        for(char c:s)m[c]++;

        int ans = 0, op = 0;

        for(int i=0; i<26; i++)
        {
            int f1 = m[lower[i]];
            int f2 = m[upper[i]];

            ans+=min(f1, f2);
            op+=(abs(f1-f2)/2);
        }

        ans+=min(op, k);
        cout<<ans<<endl;
    }   
    return 0;
}