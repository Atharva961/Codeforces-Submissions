#include<bits/stdc++.h>
using namespace std;

void process(string& small, string& large)
{
    while(small.size() != large.size())
    {
        small = "0" + small;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a, b;
        cin>>a>>b;
        string large, small;

        if(a.size()>b.size())
        {
            large = a;
            small = b;
        }
        else
        {
            small = a;
            large = b;
        }
        process(small, large);

        bool flag = false;
        long long ans = 0;

        for(int i=0; i<small.size(); i++)
        {
            if(flag)ans+=9;
            else ans+=(abs((small[i] - '0') + (large[i] - '0')));
            if(small[i] != large[i])flag = true;
        }

        cout<<ans<<endl;
    }   
    return 0;
}