#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int sum = a + b + c;
        int maxx = max(sum - a, max(sum - b, sum - c));
        string ans = maxx>=10?"YES":"NO";
        cout<<ans<<endl;
    }
    return 0;
}