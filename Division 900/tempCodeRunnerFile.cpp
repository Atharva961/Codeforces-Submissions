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

        int ans = n+1;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            int diff = abs(i - temp + 1);
            if(diff!=0)ans = min(ans, diff);
        }

        cout<<ans<<endl;
    }
    return 0;
}