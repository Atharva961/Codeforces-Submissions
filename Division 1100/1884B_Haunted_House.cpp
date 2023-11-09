#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;

        vector<long long> nums;
        for(long long i=0; i<s.size(); i++)
        {
            if(s[i] == '0')nums.push_back(i);
        }

        long long val = 0;
        for(long long i=n-1; i>=0; i--)
        {
            if(nums.size() == 0)
            {
                cout<<"-1 ";
                continue;
            }
            val += ( i - nums[nums.size() - 1]);
            nums.pop_back();
            cout<<val<<" ";
        }
        cout<<endl;
    }   
    return 0;
}