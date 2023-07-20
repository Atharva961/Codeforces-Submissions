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

        if(n%2==0)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<int> ans;

        int counter = 40;

        while(counter--)
        {
            if(n==1)break;
            int prev = (n-1)/2, next = (n+1)/2;
            if(prev%2!=0)
            {
                ans.push_back(2);
                n = prev;
            }
            if(next%2!=0)
            {
                ans.push_back(1);
                n = next;
            }
        }

        if(counter==0 && n!=1)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}