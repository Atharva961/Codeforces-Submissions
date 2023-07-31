#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        else if (n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        for(int i=2; i<=n; i+=2)
        {
            cout<<i<<" "<<i-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}