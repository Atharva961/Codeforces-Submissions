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
        long long ans = 0;
        long long N = n;

        ans+=(N*4);
        ans+=(N-1);
        ans+=1;

        ans+=((N-1)*(N-2));
        cout<<ans<<endl;
    }
    return 0;
}