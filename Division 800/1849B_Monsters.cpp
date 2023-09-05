#include<bits/stdc++.h>
using namespace std;

static bool compare(vector<int>& a, vector<int>& b)
{
    if(a[0]==b[0])return a[1]<b[1];
    return a[0]>b[0];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<vector<int>> v;

        int maxx = INT_MIN;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            maxx = max(maxx, temp);
            v.push_back({temp, i+1});
        }

        if(k>=maxx)
        {
            sort(v.begin(), v.end());
        }
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                int val = v[i][0]%k;
                if(val==0)val = k;
                v[i][0] = val;
            }
            sort(v.begin(), v.end(), compare);
        }

        for(int i=0; i<v.size(); i++)cout<<v[i][1]<<" ";
        cout<<endl;
    }   
    return 0;
}