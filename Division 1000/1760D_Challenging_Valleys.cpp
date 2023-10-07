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

        int prev = -1;
        int prev_dec = INT_MAX;
        bool inc = true;
        bool dec = true;
        vector<int> nums;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            if(temp<prev)inc = false;
            if(temp>prev_dec)dec = false;            
            prev = temp;
            prev_dec = temp;
        }

        if(inc || dec || n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        vector<int> v;

        if(nums[0]<nums[1])v.push_back(1);
        if(nums[0]>nums[1])v.push_back(0);

        for(int i=1; i<n-1; i++)
        {
            if(nums[i] == nums[i+1])continue;
            int x = nums[i]<nums[i+1];
            if(v.size()==0 || x != v[v.size()-1])v.push_back(x);
        }

        string ans = "NO";
        if(v.size()==2 && v[0] == 0 && v[1] == 1)
        {
            ans = "YES";
        }

        cout<<ans<<endl;
    }   
    return 0;
}