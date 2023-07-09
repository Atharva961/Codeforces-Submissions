#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int temp;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        v.clear();
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        int contrast_value = 0;
        for(int i=1; i<n; i++)
        {
            contrast_value+=abs(v[i]-v[i-1]);
        }
        if(contrast_value==0)cout<<1<<endl;
        else if(v.size()==2)cout<<2<<endl;
        else
        {
            int ans = n;
            int deleted = 0;
            for(int i=1; i<n-1; i++)
            {
                int prev = abs(v[i] - v[i-1-deleted]) + abs(v[i+1]-v[i]);
                int next = abs(v[i+1]-v[i-1-deleted]);
                if(prev==next)
                {
                    ans--;
                    deleted++;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}