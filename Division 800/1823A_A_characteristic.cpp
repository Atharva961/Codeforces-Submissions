#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    return n*(n-1)/2;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        int beg = 0, end = n;

        while(beg<=end)
        {
            if(sum(beg)+sum(end)==k)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<beg; i++)cout<<1<<" ";
                for(int i=0; i<end; i++)cout<<-1<<" ";
                cout<<endl;
                break;
            }
            beg++;
            end--;
        }

        cout<<"NO"<<endl;
    }
    return 0;
}