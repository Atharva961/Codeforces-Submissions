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

        sort(nums.begin(), nums.end());

        int ptr = 1;
        long long ans = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == ptr)ptr++;
            if(nums[i] > ptr)
            {
                ans+=1LL*(nums[i] - ptr);
                nums[i] = ptr;
                ptr++;
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}