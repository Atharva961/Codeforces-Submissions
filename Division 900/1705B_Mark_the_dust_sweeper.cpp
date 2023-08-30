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
        long long ans = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
            if(i<n-1)
            {
                if(temp==0)ans+=1;
                else ans+=temp;
            }
        }

        int start = 0;

        while(v[start]==0 && start<n-1)
        {
            ans--;
            start++;
        }

        cout<<ans<<endl;        
    }   
    return 0;
}