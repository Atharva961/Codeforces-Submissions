#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;

        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0];
            cout << "*";
            cout << endl;
            continue;
        }
        if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES" << endl;
            cout << "*";
            cout << b[b.size() - 1] << endl;
            continue;
        }

        unordered_map<string, int> m;

        string ans = "";

        for (int i = 0; i < a.size() - 1; i++)
        {
            string t;
            t.push_back(a[i]);
            t.push_back(a[i + 1]);
            m[t]++;
        }

        for (int i = 0; i < b.size() - 1; i++)
        {
            string t;
            t.push_back(b[i]);
            t.push_back(b[i + 1]);
            if (m[t])
            {
                ans = t;
                break;
            }
        }

        if (ans.size() == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << "*" + ans + "*" << endl;
    }
    return 0;
}