#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        /*
        a/b should be equal to c/d
        ax/b == c/d
        x = ad/bc or bc/ad
        */

        if (a == 0 || c == 0)
        {
            cout << 1 << endl;
            continue;
        }

        long long A = a*d;
        long long B = b*c;

        if(A==B)
        {
            cout<<0<<endl;
            continue;
        }

        if(A%B==0 || B%A==0)
        {
            cout<<1<<endl;
            continue;
        }

        cout<<2<<endl;
    }
    return 0;
}