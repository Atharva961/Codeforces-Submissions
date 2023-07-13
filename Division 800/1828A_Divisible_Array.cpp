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

        if(n%2!=0)
        {
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            int sum = 0;
            for(int i=1; i<=n; i++)sum+=i;

            int rem = sum%n;
            int beg = n-rem+1;
            cout<<beg<<" ";
            for(int i=2; i<=n; i++)cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}