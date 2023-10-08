#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, vector<int>& g, int n)
{
    int ans = -1;

    for(int i:nums)
    {
        int index = upper_bound(g.begin(), g.end(), i) - g.begin();
        if(index == g.size())
        {
            int val = (n - i) + g[0];
            ans = max(ans, val);
        }
        else
        {
            ans = max(ans, g[index] - i);
        }
    }

    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;

        vector<int> r, y, g;

        for(int i=0; i<n; i++)
        {
            char temp;
            cin>>temp;
            if(temp == 'r')r.push_back(i);
            if(temp == 'y')y.push_back(i);
            if(temp == 'g')g.push_back(i);
        }

        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }

        int ans = -1;
        if(c=='y')ans = solve(y, g, n);
        if(c=='r')ans = solve(r, g, n);

        cout<<ans<<endl;
    }   
    return 0;
}