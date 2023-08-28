#include<bits/stdc++.h>
using namespace std;

//a is sleeping time, b is alarm
vector<int> difference(vector<int>& a, vector<int>& b)
{
    if(a[0]>b[0])
    {
        int h = 24 - a[0] + b[0];
        int m = b[1] - a[1];
        if(m<0)
        {
            if(h==0)h = 23;
            else h--;
            m = 60 + m;
        }
        return {h, m};
    }
    else
    {
        int h = b[0] - a[0];
        int m = b[1] - a[1];
        if(m<0)
        {
            if(h==0)h = 23;
            else h--;
            m = 60 + m;
        }
        return {h, m};
    }
}

vector<int> minn(vector<int>& a, vector<int>& b)
{
    if(a[0]==b[0])
    {
        if(a[1]<b[1])return a;
        return b;
    }
    if(a[0]<b[0])return a;
    else return b;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a, b;
        cin>>a>>b;
        
        vector<int> ref = {a, b};
        vector<int> ans = {25, 61};

        for(int i=0; i<n; i++)
        {
            int temp1, temp2;
            cin>>temp1>>temp2;
            vector<int> temp = {temp1, temp2};
            vector<int> diff = difference(ref, temp);

            ans = minn(ans, diff);

            // printf("REFERENCE: %dh : %dm", a, b);
            // printf("INPUT    : %dh : %dm", temp1, temp2);
            // printf("DIFFERENCE: ", );
        }

        cout<<ans[0]<<" "<<ans[1]<<endl;
    }   
    return 0;
}