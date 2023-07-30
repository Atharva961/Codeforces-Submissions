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

        int count = 0;

        for(int i=1; i<=n; i++)
        {
            int temp;
            cin>>temp;
            int diff = abs(i - temp);
            if(diff%k!=0)count++;
        }

        if(count == 0)
        {
            cout<<0<<endl;
            continue;
        }

        if(count == 2)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<-1<<endl;
    }   
    return 0;
}