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
        bool zero = false;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            if(temp==0)zero = true;
        }

        sort(nums.begin(), nums.end());

        int prev = 0, ans = 0;
        if(zero)ans++;

        for(int i=0; i<nums.size(); i++)
        {
            int val = (nums[i] <= i);
            if(prev == 0 && val == 1)ans++;
            prev = val;
        }

        cout<<ans<<endl;
    }   
    return 0;
}