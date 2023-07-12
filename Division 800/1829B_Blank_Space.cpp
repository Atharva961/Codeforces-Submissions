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

        int count = 0, ans = 0;

        for(int i:v)
        {
            if(i==0)count++;
            else
            {
                ans = max(ans, count);
                count = 0;
            }
        }
        ans = max(ans, count);
        cout<<ans<<endl;
    }
    return 0;
}