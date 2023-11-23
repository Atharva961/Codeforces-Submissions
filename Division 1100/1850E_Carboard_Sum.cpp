#include<bits/stdc++.h>
using namespace std;

long long area(vector<long long> nums, long long w, long long c)
{
    long long ans = 0;

    for(int i=0; i<nums.size(); i++)
    {
        ans+= ((nums[i] + 1LL*2*w) * (nums[i] + 1LL*2*w));
        if(ans>c)break;
    }

    return ans;
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, c;
        cin>>n>>c;

        vector<long long> nums;
        long long sum = 0, sum_of_squares = 0;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            nums.push_back(temp);
            sum+=temp;
            sum_of_squares = sum_of_squares + pow(temp, 2);
        }

        long long beg = 1, end = 10000000;
        long long ans = -1;

        while(beg<=end)
        {
            long long mid = beg + (end-beg)/2;
            long long total = area(nums, mid, c);

            if(total == c)
            {
                ans = mid;
                break;
            }
            if(total>c)end = mid-1;
            if(total<c)beg = mid+1;
        }

        cout<<ans<<endl;
    }
    return 0;
}