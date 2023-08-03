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
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                if(i%2==0)cout<<-1<<" ";
                else cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            bool flag = true;
            for(int i=1; i<n; i++)
            {
                if(i*(n/2 + 1) - (i+1)*(n/2) == -1)
                {
                    cout<<"YES"<<endl;
                    flag = false;
                    for(int j=0; j<n; j++)
                    {
                        if(j%2==0)cout<<i<<" ";
                        else cout<<-(i+1)<<" ";
                    }
                    break;
                }
            }
            if(flag)cout<<"NO"<<endl;
        }
    }   
    return 0;
}