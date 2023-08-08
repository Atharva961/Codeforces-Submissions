#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int> nums;
        int index_of_1 = -1;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            if(temp==1)index_of_1 = i;
        }

        int count = index_of_1;

        int ptr = 1;

        for(int i=index_of_1; i<n; i++)
        {
            if(nums[i]==ptr)ptr++;
            else count++;
        }

        int ans = count/k;
        if(count%k!=0)ans++;
        cout<<ans<<endl;
    }   
    return 0;
}