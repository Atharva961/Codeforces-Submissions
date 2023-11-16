#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int l, r;
        cin>>l>>r;

        if(l==1)
        {
            if(r-l < 3)
            {
                cout<<-1<<endl;
                continue;
            }
            else
            {
                cout<<"2 2"<<endl;
                continue;
            }
        }

        if(l==2)
        {
            if(r-l < 2)
            {
                cout<<-1<<endl;
                continue;
            }
            else
            {
                cout<<"2 2"<<endl;
                continue;
            }
        }

        if(r-l == 0)
        {
            int val = -1;
            for(int i=2; i<=sqrt(r)+1; i++)
            {
                if(r%i == 0)
                {
                    val = i;
                    break;
                }
            }

            if(val == -1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<val<<" "<<r-val<<endl;
            }
            continue;
        }
        

        for(int i=l; i<=r; i++)
        {
            if(i%2 == 0)
            {
                cout<<2<<" "<<i-2<<endl;
                break;
            }
        }
    }
    return 0;
}