//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    vector<vector<long long>> dp;
    long long solve(vector<int>& nums, vector<int>& v, int money, int index)
    {
        if(index==nums.size())return 0;
        if(dp[money][index]!=-1)return dp[money][index];
        long long use = INT_MAX, dont_use = INT_MAX;
        if(money>=nums[index])dont_use = solve(nums, v, money - nums[index], index+1);
        if(money>=v[index])use = 1 + solve(nums, v, money - v[index], index+1);
        
        return dp[money][index] = min(use, dont_use);
    }
    int minimumMagic(int n, int m, vector<int> &price, vector<int> &magical_price)
    {
        dp = vector<vector<long long>>(n+1, vector<long long>(m+1, -1));
        return solve(price, magical_price, m, 0);
    }
};
//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>price(n),magical_price(n);
        for(int i=0;i<n;i++)
            cin>>price[i];
        for(int i=0;i<n;i++)
            cin>>magical_price[i];
        Solution ob;
        int ans=ob.minimumMagic(n,m,price,magical_price);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends