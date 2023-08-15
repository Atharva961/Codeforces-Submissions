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

        int ans = n - (n/3);
        int no_swap = n/3;

        cout<<ans<<endl;
        int ptr = 1;
        for(int i=3*(no_swap+1); i<=(3*n); i++)
        {
            cout<<ptr<<" "<<i<<endl;
            if(ptr%3==2)ptr+=2;
            else ptr+=1;
        }
    }   
    return 0;
}