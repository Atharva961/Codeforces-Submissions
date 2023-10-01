#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k, d, w;
        cin>>n>>k>>d>>w;

        vector<int> nums;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            int j = i+1;
            ans++;
            for(j = i+1; j<min(n, i+k); j++)
            {
                int diff = abs(nums[j] - nums[i]);
                if(diff>d+w)break;
            }
            i = j-1;
        }

        cout<<ans<<endl;
    }   
    return 0;
}