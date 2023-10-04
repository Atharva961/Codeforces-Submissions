#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k, n;
        cin>>k>>n;

        vector<int> v(k-1, 1);

        int diff = n - k;

        int d = 1;

        for(int i=0; i<v.size(); i++)
        {
            if(diff>=d)
            {
                v[i]+=d;
                diff-=d;
                d++;
            }
            else break;
        }

        int ptr = 1;

        cout<<ptr<<" ";

        for(int i=0; i<v.size(); i++)
        {
            ptr+=v[i];
            cout<<ptr<<" ";
        }
        cout<<endl;
    }   
    return 0;
}