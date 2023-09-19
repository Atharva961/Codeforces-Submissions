#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k, q;
        cin>>n>>k>>q;

        vector<int> v;
        int count = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;

            if(temp<=q)
            {
                count++;
            }
            else
            {
                if(count)v.push_back(count);
                count = 0;
            }
        }
        if(count)v.push_back(count);

        long long ans = 0;

        for(int i:v)
        {
            if(i>=k)
            {
                long long num = i - k + 1;
                long long val = num*(num+1)/2;
                ans+=val;
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}