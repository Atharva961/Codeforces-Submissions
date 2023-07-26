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
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }

        sort(nums.begin(), nums.end());
        vector<int> diff;

        for(int i=1; i<nums.size(); i++)diff.push_back(nums[i] - nums[i-1]);

        int ans = 0, count = 0;

        for(int i=0; i<diff.size(); i++)
        {
            if(diff[i] <= k)
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);

        cout<<n-ans-1<<endl;
    }
    return 0;
}