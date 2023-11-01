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

        int sum = 0;

        for(int i=1; i<nums.size(); i++)
        {
            sum+=(nums[i] - nums[i-1]);
        }

        if(sum > n+1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }   
    return 0;
}