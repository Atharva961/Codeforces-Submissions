#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, r, b;
        cin>>n>>r>>b;

        int div = r/(b+1);
        int rem = r%(b+1);

        vector<int> v(b+1, div);

        for(int i=0; i<v.size(); i++)
        {
            if(!rem)break;
            v[i]++;
            rem--;
        }

        string ans = "";

        for(int i=0; i<v.size(); i++)
        {
            string temp = string(v[i], 'R') + 'B';
            ans+=temp;
        }
        ans.pop_back();

        cout<<ans<<endl;
    }   
    return 0;
}