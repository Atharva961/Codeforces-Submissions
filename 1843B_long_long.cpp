#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<int> v;
    int temp;
    while(t--)
    {
        v.clear();
        int n;
        cin>>n;
        long long ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
            ans+=abs(temp);
        }
        int count = 0, curr = 0;
        for(int i:v)
        {
            if(curr==0 && i == 0)continue;
            if(i<=0)
            {
                curr++;
            }
            else
            {
                if(curr)count++;
                curr = 0;
            }
        }
        if(curr)count++;
        cout<<ans<<" "<<count<<endl;
    }
    return 0;
}