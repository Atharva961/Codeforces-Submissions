#include<bits/stdc++.h>
using namespace std;

bool validate(vector<long long>& a, vector<long long>& b)
{
    for(long long i=0; i<a.size(); i++)
    {
        if(a[i] <= b[i])return false;
    }
    return true;
}

long long multiply(long long a, long long b, long long mod) 
{ 
    long long ans = 0;
  
    a %= mod; 
  
    while (b) { 
        if (b & 1)ans = (ans + a) % mod; 
        a = (2 * a) % mod; 
        b >>= 1; 
    } 

    return ans; 
} 

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> a, b;

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            a.push_back(temp);
        }

        for(long long i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(!validate(a, b))
        {
            cout<<0<<endl;
            continue;
        }

        long long ans = 1;
        long long mod = 1000000007;

        for(long long i=0; i<a.size(); i++)
        {
            long long lb = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            ans = multiply(ans, lb-i, mod);
            // cout<<lb<<" ";
        }

        // cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}