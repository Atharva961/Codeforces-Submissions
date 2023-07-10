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
 
        vector<int> h(201, 0);
 
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            h[temp]++;
        }
 
        bool ans = true;
        for(int i=1; i<h.size(); i++)
        {
            if(h[i]>h[i-1])
            {
                ans = false;
                break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}