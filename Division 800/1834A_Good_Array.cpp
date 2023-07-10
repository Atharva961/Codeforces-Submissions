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

        int count = 0;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp==-1)count++;
        }

        int org = count;
        while(count>n/2 || count%2!=0)count--;
        int ans = org - count;

        cout<<ans<<endl;
    }
    return 0;
}