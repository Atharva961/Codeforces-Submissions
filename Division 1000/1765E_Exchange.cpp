#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, a, b;
        cin>>n>>a>>b;

        if(a>b)
        {
            cout<<1<<endl;
            continue;
        }

        int div = n/a;
        int rem = n%a;

        int ans = div + (rem!=0);

        cout<<ans<<endl;
    }   
    return 0;
}