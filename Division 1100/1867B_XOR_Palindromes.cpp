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

        int equal = 0, unequal = 0, reserve = 0;
        if(n%2!=0)reserve = 1;

        int beg = 0, end = n-1;

        while(beg<end)
        {
            equal+=(s[beg] == s[end]);
            unequal+=(s[beg] != s[end]);
            beg++;
            end--;
        }

        beg = unequal, end = 2*equal + unequal + reserve;

        // printf("For this testcase: \nbeg = %d \nend = %d\n", beg, end);

        for(int i=0; i<=n; i++)
        {
            if(i>=beg && i<=end)
            {
                if(i%2 != unequal%2)
                {
                    cout<<reserve;
                }
                else
                {
                    cout<<1;
                }
            }
            else cout<<0;
        }

        cout<<endl;
    }
    return 0;
}