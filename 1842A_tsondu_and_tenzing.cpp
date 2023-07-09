#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp;
    int n, m;
    vector<int> v1, v2;

    while(t--)
    {
        cin>>n>>m;
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            sum1+=temp;
        }
        for(int i=0; i<m; i++)
        {
            cin>>temp;
            sum2+=temp;
        }
        if(sum1<sum2)cout<<"Tenzing"<<endl;
        if(sum1>sum2)cout<<"Tsondu"<<endl;
        if(sum1==sum2)cout<<"Draw"<<endl;
        
    }
    return 0;
}