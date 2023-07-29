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

        vector<int> v;
        unordered_map<int, int> m;

        int ans = 0;

        for(int i=1; i<=n; i++)
        {
            int temp;
            cin>>temp;
            int diff = abs(i - temp);
            if(diff!=0)ans = __gcd(ans, diff);
        }

        cout<<ans<<endl;
    }
    return 0;
}