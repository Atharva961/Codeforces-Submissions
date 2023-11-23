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

        int temp;
        cin>>temp;
        int ans = temp;
        int sum = temp;
        int parity = abs(temp)%2;

        for(int i=1; i<n; i++)
        {
            cin>>temp;
            if(abs(temp)%2 == parity)sum = temp;
            else sum+=temp;
            if(temp>sum)sum = temp;
            ans = max(ans, sum);
            parity = abs(temp)%2;
        }

        cout<<ans<<endl;
    }
    return 0;
}