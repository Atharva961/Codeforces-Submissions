#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, temp;
    vector<int> v;
    
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        int minn;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
            if(i==0)minn = temp;
            else minn&=temp;
            cout<<minn<<" ";
        }

        cout<<endl;
        
        
    }
    return 0;
}