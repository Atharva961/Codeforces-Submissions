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

        if(n<=2)
        {
            for(int i=1; i<=n; i++)cout<<i<<" ";
            cout<<endl;
            continue;
        }
        vector<int> ans(n, -1);
        ans[0] = 2, ans[n-1] = 3;
        ans[n/2] = 1;

        int ptr = 4;

        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]==-1)
            {
                ans[i] = ptr;
                ptr++;
            }
        }

        for(int i:ans)cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}