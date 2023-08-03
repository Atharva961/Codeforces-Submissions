#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>k>>n;

        vector<vector<int>> points;

        int maxx = INT_MIN, minn = INT_MAX;
        int count = 0;

        for(int i=0; i<k; i++)
        {
            int a, b;
            cin>>a>>b;

            if(a<=n && b>=n)
            {
                count++;
                points.push_back({a, b});
                maxx = max(maxx, b);
                minn = min(minn, a);
            }
        }

        if(count==0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        bool flag = true;
        for(int i=minn; i<=maxx; i++)
        {
            if(i==n)continue;
            int temp = 0;

            for(auto p:points)
            {
                if(p[0]<=i && p[1]>=i)temp++;
            }
            if(temp>=count)
            {
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }

        if(flag)cout<<"YES"<<endl;

    }   
    return 0;
}