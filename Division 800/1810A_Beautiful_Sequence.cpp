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

        vector<int> v;
        string ans = "NO";

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp<=i+1)ans = "YES";
            v.push_back(temp);
        }

        cout<<ans<<endl;
    }
    return 0;
}