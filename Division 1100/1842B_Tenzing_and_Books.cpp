#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, int>& m)
{
    cout<<"Showing the map: "<<endl;

    for(auto i:m)
    {
        cout<<i.first<<","<<i.second<<endl;
    }
    cout<<endl;
}

bool compare(int x, int n, unordered_map<int, int>& m)
{
    int i = 0;
    unordered_map<int, int> dup = m;
    while(n)
    {
        if(n&1)
        {
            // printf("%d for i == %d\n", x&(1<<i), i);
            if((x&(1<<i)) == 0)return false;
            dup[i] = 1;
        }
        i++;
        n>>=1;
    }
    m = dup;
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        cin>>n>>x;

        vector<int> v1, v2, v3;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }   

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v2.push_back(temp);
        }

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v3.push_back(temp);
        }

        unordered_map<int, int> comp;

        unordered_map<int, int> m;

        for(int i=0; i<n; i++)
        {
            if(!compare(x, v1[i], m))break;
        }

        for(int i=0; i<n; i++)
        {
            if(!compare(x, v2[i], m))break;
        }

        for(int i=0; i<n; i++)
        {
            if(!compare(x, v3[i], m))break;
        }
        
        int i = 0;
        while(x)
        {
            if(x&1)comp[i]++;
            x/=2;   
            i++;
        }

        string ans = "Yes";
        for(auto i:comp)
        {
            if(m[i.first] != i.second)
            {
                ans = "No";
            }
        }

        // print(m);
        // print(comp);

        cout<<ans<<endl;
    }
    return 0;
}