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


        long long beg = 0, end = n-1;
        long long ans = abs(nums[beg] - nums[end]);

        bool flag = false;
        set<int> s;

        while(beg < end)
        {
            if(nums[beg] == 0 && nums[end]!=0)s.insert(nums[end]);
            if(nums[end] == 0 && nums[beg]!=0)s.insert(nums[beg]);
            long long diff = abs(nums[beg] - nums[end]);
            ans = min(ans, diff);
            beg++;
            end--;
        }

        if(s.size() > 1)ans = 1;

        cout<<ans<<endl;
    }
    return 0;
}