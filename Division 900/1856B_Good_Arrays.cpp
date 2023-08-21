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

        long long count = 0, sum = 0;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
            // maxx = max(maxx, temp);
            if(temp==1)
            {
                count++;
            }
            sum+=temp;
        }

        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int other_sum = sum - count;
        int other_count = n - count;

        if(count > (other_sum - other_count))
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;        
    }   
    return 0;
}