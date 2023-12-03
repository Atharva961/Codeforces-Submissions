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

        int one = -1, two = -1, index = -1;

        for(int i=1; i<=n; i++)
        {
            int temp;
            cin>>temp;
            if(temp == 1)one = i;
            if(temp == 2)two = i;
            if(temp == n)index = i;
        }

        //Bring the n between 1 and 2, that way we will always have to consider the entire array while making a permutation

        int first = min(one, two);
        int last = max(one, two);

        if(index < first)
        {
            cout<<index<<" "<<first<<endl;
            continue;
        }

        if(index > last)
        {
            cout<<index<<" "<<last<<endl;
            continue;
        }

        cout<<index<<" "<<index<<endl;
    }
    return 0;
}