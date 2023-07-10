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

        char prev = NULL;

        set<string> s;

        for(int i=0; i<n; i++)
        {
            char temp;
            cin>>temp;
            if(i>=1)
            {
                string t = "";
                t.push_back(prev);
                t.push_back(temp);
                s.insert(t);
            }
            prev = temp;
        }

        cout<<s.size()<<endl;
    }
    return 0;
}