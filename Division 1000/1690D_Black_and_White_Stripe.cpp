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

        unordered_map<char, int> m;
        for(int i=0; i<k; i++)
        {
            m[s[i]]++;
        }

        int ans = m['W'];

        int beg = 0, end = k-1;

        while(end<s.size()-1)
        {
            m[s[beg]]--;
            beg++;
            end++;
            m[s[end]]++;
            ans = min(ans, m['W']);
        }

        cout<<ans<<endl;
    }   
    return 0;
}