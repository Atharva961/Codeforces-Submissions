#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, x;
        cin>>n>>x;

        vector<long long> nums;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());
        
        vector<long long> v;
        long long sum = nums[0];
        v.push_back(0);

        for(long long i=1; i<nums.size(); i++)
        {
            long long area = i*nums[i];
            v.push_back(area-sum);
            sum+=nums[i];
        }

        long long index = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
        // cout<<index<<endl;
        long long water = v[index];
        long long left_over = x - water;
        long long ans = nums[index];
        ans+=(left_over/(index+1));
        cout<<ans<<endl;
    }
    return 0;
}