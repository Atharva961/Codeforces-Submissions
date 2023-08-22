#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;

        if(x!=0 && y!=0)
        {
            cout<<-1<<endl;
            continue;
        }

        if(x==0 && y==0)
        {
            cout<<-1<<endl;
            continue;
        }
        
        int div = max(x, y);

        if((n-1)%div!=0)
        {
            cout<<-1<<endl;
            continue;
        }

        int ptr = 1;
        int count = 0;

        for(int i=0; i<n-1; i++)
        {
            cout<<ptr<<" ";
            count++;
            if(count==div)
            {
                ptr = i+1;
                count = 0;
            }
        }
    }   
    return 0;
}