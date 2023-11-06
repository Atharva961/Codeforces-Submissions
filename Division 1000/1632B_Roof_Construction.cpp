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

        int ptr = 1;

        while(ptr*2<n)ptr*=2;

        vector<int> ans;
        for(int i=1; i<ptr; i++)ans.push_back(i);
        ans.push_back(0);
        for(int i=ptr; i<n; i++)ans.push_back(i);
        
        for(int i:ans)cout<<i<<" ";
        cout<<endl; 
    }   
    return 0;
}