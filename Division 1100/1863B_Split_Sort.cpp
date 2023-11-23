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

        vector<vector<int>> v;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back({temp, i});
        }

        sort(v.begin(), v.end());

        int ans = 0;

        for(int i=1; i<v.size(); i++)
        {
            if(v[i][1] < v[i-1][1])ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}