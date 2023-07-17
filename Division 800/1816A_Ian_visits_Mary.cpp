#include<bits/stdc++.h>
using namespace std;

int maxi = pow(10, 9);
bool valid(int a, int b)
{
    if(a==0 || b==0)return false;
    if(a<0 || a>maxi || b<0 || b>maxi)return false;

    if(max(a, b)%min(a, b)==0)return false;
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        int maxx = max(a, b), minn = min(a, b);

        if(maxx%minn==0 || a==b)
        {
            cout<<2<<endl;
            if(valid(a+2, b+1))
            {
                cout<<a+2<<" "<<b+1<<endl;
            }
            else if(valid(a+2, b-1))
            {
                cout<<a+2<<" "<<b-1<<endl;
            }
            else if(valid(a-2, b+1))
            {
                cout<<a-2<<" "<<b+1<<endl;
            }
            else if(valid(a-2, b-1))
            {
                cout<<a-2<<" "<<b-1<<endl;
            }
            else if(valid(a+1, b+2))
            {
                cout<<a+1<<" "<<b+2<<endl;
            }
            else if(valid(a+1, b-2))
            {
                cout<<a+1<<" "<<b-2<<endl;
            }
            else if(valid(a-1, b+2))
            {
                cout<<a-1<<" "<<b+2<<endl;
            }
            else if(valid(a-1, b-2))
            {
                cout<<a-1<<" "<<b-2<<endl;
            }
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}