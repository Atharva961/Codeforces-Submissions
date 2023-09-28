#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a, b;
        cin>>a>>b;

        string ans = "NO";
        for(int i=0; i<a.size()-1; i++)
        {
            if((a[i] == '0' and b[i]=='0') and (a[i+1] == '1' and b[i+1] == '1'))
            {
                ans = "YES";
                break;
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}