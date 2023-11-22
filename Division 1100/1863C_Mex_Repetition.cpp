#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums)
{
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i:nums)m[i]++;
    for(int i=0; i<=n; i++)if(!m[i])return i;
    return n+1;   
}

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

        int mex = solve(nums);
        nums.insert(nums.begin(), mex);
        vector<int> res = nums;

        int total = k%(n+1);
        rotate(nums.rbegin(), nums.rbegin() + total, nums.rend());
        nums.erase(nums.begin());

        for(int i:nums)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}