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
        vector<int> a, b;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }

        unordered_map<int, int> m1, m2;

        int curr = -1, count = 0;

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==curr)
            {
                count++;
                if(!m1[a[i]])m1[a[i]] = count;
                else m1[a[i]] = max(m1[a[i]], count);
            }
            else
            {
                curr = a[i];
                count = 1;
                if(!m1[a[i]])m1[a[i]] = count;
                else m1[a[i]] = max(m1[a[i]], count);
            }
        }

        curr = -1, count = 0;

        for(int i=0; i<b.size(); i++)
        {
            if(b[i]==curr)
            {
                count++;
                if(!m2[b[i]])m2[b[i]] = count;
                else m2[b[i]] = max(m2[b[i]], count);
            }
            else
            {
                curr = b[i];
                count = 1;
                if(!m2[b[i]])m2[b[i]] = count;
                else m2[b[i]] = max(m2[b[i]], count);
            }
        }

        int ans = 0;

        for(int i=0; i<a.size(); i++)
        {
            ans = max(ans, m1[a[i]] + m2[a[i]]);
            ans = max(ans, m1[b[i]] + m2[b[i]]);
        }

        cout<<ans<<endl;
    }   
    return 0;
}