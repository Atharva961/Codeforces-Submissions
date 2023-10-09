#include<bits/stdc++.h>
using namespace std;
 
int ans;
 
int calculate(vector<int>& nums)
{
    int ans = nums[0];
    for(int i=1; i<nums.size(); i++)
    {
        ans = __gcd(ans, nums[i]);
    }
    return ans;
}
 
void solve(vector<int>& nums, int index, int cost)
{
    if(index == -1)
    {
        int val = calculate(nums);
        if(val==1)ans = min(ans, cost);
        return;
    }
 
    //process
    int res = nums[index];
    nums[index] = __gcd(nums[index], index+1);
    if(calculate(nums) == 1)
    {
        ans = min(ans, cost + int(nums.size() - index));
        return;
    }
    else solve(nums, index-1, cost + (nums.size() - index));
    nums[index] = res;
 
    //don't process
    solve(nums, index-1, cost);
}

int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        cin>>n;
        ans = n;
 
        vector<int> nums;
 
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }

        if(calculate(nums) == 1)
        {
            cout<<0<<endl;
            continue;
        }
 
        solve(nums, n-1, 0);
 
        cout<<ans<<endl;
    }   
    return 0;
}