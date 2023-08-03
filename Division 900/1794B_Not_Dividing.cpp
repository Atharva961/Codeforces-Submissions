#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i+1]%v[i]==0)return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp==1)temp = 2;
            v.push_back(temp);
        }

        for(int i=1; i<v.size(); i++)
        {
            if(v[i]%v[i-1]==0)v[i]++;
        }

        for(int i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}