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

        vector<int> nums;
        for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            if(c == '*')nums.push_back(i);
        }

        if(nums.size()==1)
        {
            cout<<1<<endl;
            continue;
        }

        int ans = 1;
        unordered_map<int, int> m;

        int ptr = 0;
        while(ptr<nums.size()-1)
        {
            int ub = upper_bound(nums.begin(), nums.end(), nums[ptr] + k) - nums.begin();
            ptr = ub - 1;
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}