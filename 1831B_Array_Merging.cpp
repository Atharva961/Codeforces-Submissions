#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        unordered_map<int, int> m1, m2;
        int ans = 0;
        int prev = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != prev)
            {
                m1[a[i]] = 1;
            }
            else
            {
                m1[a[i]]++;
            }
            ans = max(ans, m1[a[i]]);
            prev = a[i];
        }
        prev = -1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != prev)
            {
                m2[b[i]] = 1;
            }
            else
            {
                m2[b[i]]++;
            }
            ans = max(ans, m2[b[i]]);
            prev = b[i];
        }

        cout << ans << endl;
    }
    return 0;
}
