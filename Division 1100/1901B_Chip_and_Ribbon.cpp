#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long> nums;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            nums.push_back(temp);
        }

        long long ans = nums[0] - 1;

        for(long long i=1; i<nums.size(); i++)
        {
            if(nums[i] > nums[i-1])
            {
                if(nums[i-1] == 0)ans+=nums[i];
                else ans+=(nums[i] - nums[i-1]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}