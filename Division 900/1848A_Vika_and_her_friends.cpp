#include<bits/stdc++.h>
using namespace std;

/*
This question is a little bit tricky and may seem illogical at start

But the mathematics involved behind this is tricky

To solve this question visulize a chess board

If Vika is on a black/white square and all her friends are on the square of the opposite colour,
they will never be able to catch her

If even one of the friends is on the same square, they will inevitably catch her
*/

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;

        int i0, j0;
        cin>>i0>>j0;

        string ans = "YES";

        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;

            if((a+b)%2 == (i0 + j0)%2)
            {
                ans = "NO";
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}