#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        cin>>n>>x;

        vector<int> nums;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());

        int area = 0;
        int ans = 0;

        for(int i=0; i<nums.size(); i++)
        {
            
        }
    }
    return 0;
}