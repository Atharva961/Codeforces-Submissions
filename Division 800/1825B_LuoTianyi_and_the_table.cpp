#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        int maxx = INT_MIN, minn = INT_MAX;
        priority_queue<int, vector<int>, greater<int>> q;
        priority_queue<int> q1;
        for (int i = 0; i < n * m; i++)
        {
            int temp;
            cin >> temp;
            maxx = max(maxx, temp);
            minn = min(minn, temp);
            v.push_back(temp);
            q.push(temp);
            q1.push(temp);
        }
        q.pop();
        q1.pop();
        int max2 = q1.top();
        int min2 = q.top();
        int ans1 = ((maxx - min2) * (min(n, m) - 1)) + ((maxx - minn) * (max(n, m) - 1)) + ((maxx - minn) * ((n - 1) * (m - 1)));
        int ans2 = ((max2 - minn) * (min(n, m) - 1)) + ((maxx - minn) * (max(n, m) - 1)) + ((maxx - minn) * ((n - 1) * (m - 1)));
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}

