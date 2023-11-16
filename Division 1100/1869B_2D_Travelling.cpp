#include<bits/stdc++.h>
using namespace std;

long long distance(vector<long long>& a, vector<long long>& b)
{
    return llabs(a[0] - b[0]) + llabs(a[1] - b[1]);
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, k, a, b;
        cin>>n>>k>>a>>b;
        vector<vector<long long>> v;

        for(long long i=0; i<n; i++)
        {
            long long n1, n2;
            cin>>n1>>n2;
            v.push_back({n1, n2});
        }

        if(a<=k && b<=k)
        {
            cout<<0<<endl;
            continue;
        }

        long long dist_a = LLONG_MAX/2, dist_b = LLONG_MAX/2;
        long long ans = distance(v[a-1], v[b-1]);

        for(long long i=0; i<k; i++)
        {
            dist_a = min(dist_a, distance(v[a-1], v[i]));
            dist_b = min(dist_b, distance(v[b-1], v[i]));
        }

        ans = min(ans, dist_a + dist_b);

        cout<<ans<<endl;
    }
    return 0;
}