#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int temp;
    vector<int> nums;
    while(t--)
    {   
        nums.clear();
        int n;
        cin>>n;
        vector<int> h(51, 0);
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            h[temp]++;
        }
        for(int i=0; i<h.size(); i++)
        {
            for(int j=0; j<h[i]; j++)
            {
                nums.push_back(i);
            }
        }

        int beg = 0, end = nums.size()-1;
        int ans = 0;
        while(beg<=end)
        {
            ans+=(nums[end] - nums[beg]);
            beg++;
            end--;
        }
        cout<<ans<<endl;
    }   
    return 0;
}