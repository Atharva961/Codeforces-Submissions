#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int> ans(n, 0);
        int ptr = n;

        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]!=0)continue;
            else
            {
                ans[i] = ptr;
                if(i+k-1<n)ans[i+k-1] = n - ptr + 1;
                ptr--;
            }
        }

        for(int i:ans)cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}