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

        string s;
        cin>>s;

        vector<int> liked, disliked;

        for(int i=0; i<nums.size(); i++)
        {
            if(s[i] == '1')
            {
                liked.push_back(nums[i]);
            }
            else
            {
                disliked.push_back(nums[i]);
            }
        }

        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());

        int ptr = 1;
        unordered_map<int, int> m;

        for(int i=0; i<disliked.size(); i++)
        {
            m[disliked[i]] = ptr;
            ptr++;
        }

        for(int i=0; i<liked.size(); i++)
        {
            m[liked[i]] = ptr;
            ptr++;
        }

        for(int i:nums)cout<<m[i]<<" ";
        cout<<endl;
    }   
    return 0;
}