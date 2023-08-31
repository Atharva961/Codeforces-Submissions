#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, t;
    cin>>n>>t;
 
    vector<long long> v;
    for(long long i=0; i<n; i++)
    {
        long long temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    vector<long long> nums;
    nums.push_back(v[0]);
    for(long long i=1; i<v.size(); i++)
    {
        nums.push_back(v[i] + nums[int(nums.size()-1)]);
    }
 
    while(t--)
    {
        long long a, b;
        cin>>a>>b;
 
        long long beg = n - a, end = n - a + b;
        long long ans;
 
        if(beg==0)ans = nums[end-1];
        else ans = nums[end-1] - nums[beg-1];
 
        cout<<ans<<endl;
    }   
    return 0;
}