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

        vector<int> dup = nums;

        sort(nums.begin(), nums.end());
        unordered_map<int, vector<int>> m;

        int beg = -1, end = 1;
        int ans = 0;

        for(int i=nums.size() - 1; i>=0; i-=2)
        {
            m[nums[i]].push_back(beg);
            ans+=abs(2*beg);
            if(i!=0)
            {
                m[nums[i-1]].push_back(end);
                ans+=abs(2*end);
            }
            beg--;
            end++;
        }

        cout<<ans<<endl;
        cout<<0<<" ";
        for(int i:dup)
        {
            cout<<m[i].back()<<" ";
            m[i].pop_back();
        }
        cout<<endl;
    }   
    return 0;
}