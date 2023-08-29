#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin>>n>>m;

    vector<long long> nums;
    for(int i=0; i<n; i++)
    {
        long long temp;
        cin>>temp;
        nums.push_back(temp);
    }

    vector<long long> pos, neg;
    pos.push_back(0);
    neg.push_back(0);

    long long p_diff = 0, n_diff = 0;

    for(int i=1; i<nums.size(); i++)
    {
        long long diff = nums[i] - nums[i-1];
        if(diff<0)
        {
            n_diff+=abs(diff);
        }
        else
        {
            p_diff+=diff;
        }
        neg.push_back(n_diff);
        pos.push_back(p_diff);
    }

    for(long long i:pos)cout<<i<<" ";
    cout<<endl;

    for(long long i:neg)cout<<i<<" ";
    cout<<endl;

    while(m--)
    {
        int a, b;
        cin>>a>>b;

        if(a<b)
        {
            long long ans = neg[b-1] - neg[a-1];
            cout<<ans<<endl;
        }
        else
        {
            long long ans = pos[a-1] - pos[b-1];
            cout<<ans<<endl;
        }
    }      

    return 0;
}