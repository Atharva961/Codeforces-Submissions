#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(k%2==1)
        {
            vector<char> odd, even;

            for(int i=0; i<s.size(); i++)
            {
                if(i%2==0)odd.push_back(s[i]);
                else even.push_back(s[i]);
            }

            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());

            for(int i=0; i<odd.size(); i++)
            {
                cout<<odd[i];
                if(i<even.size())cout<<even[i];
            }
            cout<<endl;
        }
        else
        {
            sort(s.begin(), s.end());
            cout<<s<<endl;
        }
    }
    return 0;
}