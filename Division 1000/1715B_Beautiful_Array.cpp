#include <bits/stdc++.h>
using namespace std;

bool check(long long sum, long long k, long long n)
{
    return sum <= ((k - 1) * n);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long n1 = k * b, n2 = b * k + k - 1;

        if (s - n1 >= 0 && check(s - n1, k, n - 1))
        {
            cout << n1 << " ";
            if (n - 1 > 0)
            {
                long long rem = (s - n1) % (n - 1);

                for (long long i = 0; i < n - 1; i++)
                {
                    if (i < n - 1 - rem)
                    {
                        cout << (s - n1) / (n - 1) << " ";
                    }
                    else
                    {
                        cout << ((s - n1) / (n - 1)) + 1 << " ";
                    }
                }
            }
            cout << endl;
            continue;
        }

        if (s - n2 >= 0 && check(s - n2, k, n - 1))
        {
            cout << n2 << " ";
            if (n - 1 > 0)
            {
                long long rem = (s - n2) % (n - 1);

                for (long long i = 0; i < n - 1; i++)
                {
                    if (i < n - 1 - rem)
                    {
                        cout << (s - n2) / (n - 1) << " ";
                    }
                    else
                    {
                        cout << ((s - n2) / (n - 1)) + 1 << " ";
                    }
                }
            }
            cout << endl;
            continue;
        }

        cout << -1 << endl;
    }
    return 0;
}