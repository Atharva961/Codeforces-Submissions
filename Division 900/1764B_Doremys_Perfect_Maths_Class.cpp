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

        vector<int> v;

        int count = 0;
        int maxx = INT_MIN, minn = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            minn = min(minn, temp);
            maxx = max(maxx, temp);
            v.push_back(temp);
        }

        int hcf = maxx;
        for(int i=0; i<n; i++)
        {
            hcf = __gcd(hcf, v[i]);
        }

        cout<<maxx/hcf<<endl;
    }   
    return 0;
}