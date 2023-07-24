#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if(a!=1)
        {
            cout<<a-1<<endl;
            continue;
        }
        else
        {
            if(b!=2)
            {
                cout<<2<<endl;
                continue;
            }
            else
            {
                cout<<3<<endl;
                continue;
            }
        }
    }
    return 0;
}