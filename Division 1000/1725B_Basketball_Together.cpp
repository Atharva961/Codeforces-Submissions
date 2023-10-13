#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d;
    cin>>n>>d;

    vector<long long> nums;

    for(long long i=0; i<n; i++)
    {
        long long temp;
        cin>>temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());

    long long ans = 0;
    for(long long i=0; i<n; i++)
    {
        for(long long j=i; j<n; j++)
        {
            long long prod = nums[j] * (j - i + 1);
            if(prod>d)
            {
                i = j;
                ans++;
                break;
            }
        }
    }

    cout<<ans<<endl;
    
    return 0;
}