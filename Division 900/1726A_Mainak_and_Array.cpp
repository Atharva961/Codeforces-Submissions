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

        int maxx = INT_MIN, minn = INT_MAX;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            maxx = max(maxx, temp);
            minn = min(minn, temp);
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            ans = max(ans, nums[i] - nums[(i+1)%n]);
        }

        int val1 = minn - nums[0];
        int val2 = maxx - nums[0];
        int val3 = nums[n-1] - minn;
        int val4 = nums[n-1] - maxx;

        ans = max(ans, val1);
        ans = max(ans, val2);
        ans = max(ans, val3);
        ans = max(ans, val4);

        cout<<ans<<endl;
    }
    return 0;
}