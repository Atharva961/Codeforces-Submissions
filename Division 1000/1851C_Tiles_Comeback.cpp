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

        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int beg = v[0], end = v[n-1];
        
        if(beg!=end)
        {
            int count1 = 0;
            int index = -1;
            for(int i=0; i<n; i++)
            {
                if(v[i] == beg)count1++;
                if(count1==k)
                {
                    index = i+1;
                    break;
                }
            }

            if(index==-1)
            {
                cout<<"NO"<<endl;
                continue;
            }

            int count2 = 0;

            for(int i=index; i<n; i++)
            {
                if(v[i] == end)count2++;
            }

            if(count2>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int count = 0;
            for(int i:v)if(i==beg)count++;

            if(count>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }   
    return 0;
}