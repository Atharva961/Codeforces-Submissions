#include<bits/stdc++.h>
using namespace std;

long long MEX(vector<long long>& nums)
{
    long long MEX = -1;
    if(nums[0] != 0)return 0;

    for(long long i=0; i<nums.size()-1; i++)
    {
        if(nums[i+1] != nums[i] + 1)
        {
            MEX = nums[i] + 1;
            break;
        }
    }

    if(MEX == -1)MEX = nums[nums.size() - 1] + 1;
    return MEX;
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, k;
        cin>>n>>k;

        vector<long long> nums;
        set<long long> s;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            nums.push_back(temp);
            s.insert(temp);
        }

        sort(nums.begin(), nums.end());

        long long mex = MEX(nums);

        if(mex == nums[nums.size() - 1] + 1)
        {
            cout<<s.size() + k<<endl;
            continue;
        }

        long long val = (nums[nums.size() - 1] + mex) / 2 + ((nums[nums.size()-1] + mex)%2!=0);
        if(binary_search(nums.begin(), nums.end(), val) || k == 0)
        {
            cout<<s.size()<<endl;
            continue;
        }
        else cout<<s.size() + 1<<endl;
    }
    return 0;
}