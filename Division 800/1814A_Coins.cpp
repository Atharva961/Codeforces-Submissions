#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (n % k == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        else if ((n - k) % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
    return 0;
}