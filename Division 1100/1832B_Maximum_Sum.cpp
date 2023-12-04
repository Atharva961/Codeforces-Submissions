#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, k;
        cin>>n>>k;

        vector<long long> nums;

        vector<long long> v;

        long long sum = 0;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }

        int beg = 0, end = n - k - 1;
        long long ans = -1;

        while(end < nums.size())
        {
            long long temp = v[end];
            if(beg > 0)temp-=v[beg - 1];
            ans = max(ans, temp);
            beg+=2;
            end+=1;
        }

        cout<<ans<<endl;
    }
    return 0;
}