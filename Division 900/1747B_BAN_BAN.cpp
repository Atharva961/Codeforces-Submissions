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

        int beg = 1, end = n*3;

        int mid = end/2;

        cout<<(mid/3) + (mid%3!=0)<<endl;

        while(beg<end)
        {
            cout<<beg<<" "<<end<<endl;
            beg+=3;
            end-=3;
        }
    }   
    return 0;
}