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
        string s;
        cin>>s;

        vector<int> nums, m;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'T')nums.push_back(i);
            else m.push_back(i);
        }

        if(nums.size() != m.size()*2)
        {
            cout<<"NO"<<endl;
            continue;
        }

        string ans = "YES";
        for(int i=0; i<m.size(); i++)
        {
            int ub = upper_bound(nums.begin(), nums.end(), m[i]) - nums.begin();
            int behind = ub;
            int ahead = nums.size() - ub;
            if(behind < i+1 || ahead < m.size() - i || ahead == 0)
            {
                ans = "NO";
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}