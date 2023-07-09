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

        int maxx = INT_MIN;
        int neg = 1;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp<0)neg = temp;
            maxx = max(maxx, temp);
        }

        if(neg<0)cout<<neg<<endl;
        else cout<<maxx<<endl;
    }
    return 0;
}