#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    while(n--)
    {
        int a, b, c, count = 0;
        cin>>a>>b>>c;
        count+=a;
        count+=b;
        count+=c;
        if(count>=2)ans++;
    }
    cout<<ans;
    return 0;
}