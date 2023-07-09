#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int temp;
    int ans = 0;
    int val = -1;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        if(i<k)ans++;
        if(i==k)val = temp;
        if(i>k)
        {
            if(temp==val)ans++;
        }
    }
    cout<<ans;
    return 0;
}

