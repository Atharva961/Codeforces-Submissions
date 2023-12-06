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

        unordered_map<int, int> m;
        int maxx = 1;

        for(char c:s)
        {
            m[c]++;
            maxx = max(maxx, m[c]);
        }

        if(maxx > n/2)
        {
            int ans = n - ((n - maxx)*2);
            cout<<ans<<endl;
        }
        else
        {
            cout<<n%2<<endl;
        }
    }
    return 0;
}