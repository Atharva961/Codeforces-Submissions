#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        bool flag1 = true;
        for(int x = 0; x<=n/2; x++)
        {
            bool flag2 = true;
            for(int y=0; y<=n/2; y++)
            {
                if(2*x + k*y == n)
                {
                    cout<<"YES"<<endl;
                    flag1 = false;
                    flag2 = false;
                    break;
                }
            }
            if(!flag2)break;
        }

        if(flag1)cout<<"NO"<<endl;
    }   
    return 0;
}