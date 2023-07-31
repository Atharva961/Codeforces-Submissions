#include<bits/stdc++.h>
using namespace std;

long long subarray_sum(vector<long long>& v, long long start, long long end)
{
    if(start==0)return v[end];
    return v[end] - v[start - 1];
}

long long main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, q;
        cin>>n>>q;

        vector<long long> v;
        long long sum = 0;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            sum+=temp;
            v.push_back(sum);
        }

        bool odd = sum%2!=0;

        for(long long i=0; i<q; i++)
        {
            long long l, r, k;
            cin>>l>>r>>k;

            long long val1 = k*(r-l+1);
            long long val2 = subarray_sum(v, l, r);

            bool sign_change = val1%2 != val2%2;

            if(odd^sign_change)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}