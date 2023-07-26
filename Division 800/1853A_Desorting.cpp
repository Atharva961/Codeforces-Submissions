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
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int min_diff = INT_MAX, maxx = v[0];

        for(int i=1; i<v.size(); i++)
        {
            min_diff = min(v[i] - maxx, min_diff);
            maxx = max(maxx, v[i]);
        }

        if(min_diff<0)cout<<0<<endl;
        else if(min_diff==0)cout<<1<<endl;
        else
        {
            cout<<(min_diff/2)+1<<endl;
        }
    }
    return 0;
}