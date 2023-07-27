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
        string s;
        cin>>s;

        int val = 1;
        set<int> st;
        st.insert(val);

        int ans = 0;
        int count = 1;
        char curr = '.';

        for(char c:s)
        {
            if(c==curr)
            {
                count++;
                ans = max(ans, count);
            }
            else
            {
                curr = c;
                count = 1;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
/*
  > >  < >  > < >
1 0 -1 0 -1 0 1 0
*/