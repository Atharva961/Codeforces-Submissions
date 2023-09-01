#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = 0;
        long long overall_min = INT_MAX;
        priority_queue<long long> minns;

        for (long long i = 0; i < n; i++)
        {
            long long arr_size;
            cin >> arr_size;

            priority_queue<long long, vector<long long>, greater<long long>> pq;

            for (long long i = 0; i < arr_size; i++)
            {
                long long temp;
                cin >> temp;
                pq.push(temp);
                overall_min = min(overall_min, temp);
            }

            pq.pop();
            minns.push(pq.top());
        }

        ans += overall_min;
        n--;
        while (n--)
        {
            ans += (minns.top());
            minns.pop();
        }

        cout << ans << endl;
    }
    return 0;
}