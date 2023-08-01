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

        int zero_count = 0, count = 0, one = 0, greater = 0;
        

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp==0)zero_count++;
            else count++;

            if(temp==1)one = 1;
            if(temp>1)greater = 1;
        }

        if(zero_count>count+1)
        {
            if(one==0)
            {
                cout<<1<<endl;
            }
            else
            {
                if(greater)
                {
                    cout<<1<<endl;
                }
                else cout<<2<<endl;
            }   
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}