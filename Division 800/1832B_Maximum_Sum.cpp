#include<bits/stdc++.h>
using namespace std;

long long ans = 0;

void solve(vector<int>& v, int beg, int end, int k, long long sum)
{
    if(k==0)
    {
        if(sum>ans)ans = sum;
        return;
    }
    if(beg>=end)return;
    solve(v, beg+2, end, k-1, sum-v[beg]-v[beg+1]);
    solve(v, beg, end-1, k-1, sum-v[end]);
}

int main()
{
    int t;
    cin>>t;
    vector<int> v;
    int temp;
    while(t--)
    {
        v.clear();
        int n, k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        long long sum = 0;
        sort(v.begin(), v.end());
        for(int i:v)sum+=i;
        ans = 0;
        solve(v, 0, v.size()-1, k, sum);
        cout<<ans<<endl;
    }
    return 0;
}