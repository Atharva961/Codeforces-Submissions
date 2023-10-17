#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> nums;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }

        int beg = 1, end = 1;

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] - nums[i-1] >= 0)beg++;
            else break;
        }

        for(int i=nums.size()-1; i>=1; i--)
        {
            if(nums[i-1] - nums[i] >=0)end++;
            else break;
        }

        if(beg + end >=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }   
    return 0;
}