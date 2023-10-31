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

        unordered_map<int, int> m;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            m[temp]++;
        }

        bool flag = false;
        for(int i:nums)
        {
            if(m[i] == 1)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout<<-1<<endl;
            continue;
        }

        for(int i=0; i<nums.size(); i++)
        {
            int lb = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin() - 1;
            cout<<lb+1<<" ";
            for(int j=i; j<lb; j++)cout<<j+1<<" ";
            i = lb;
        }
        cout<<endl;   
    }
    return 0;
}