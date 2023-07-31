#include <bits/stdc++.h>
using namespace std;

int solve(int& n)
{
    int maxx = INT_MIN, minn = INT_MAX;

    while (n)
    {
        maxx = max(maxx, n % 10);
        minn = min(minn, n % 10);
        n /= 10;
    }

    return maxx - minn;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int ans = -1, maxx = -1;

        for(int i=l; i<=min(r, l+100); i++)
        {
            int val = i;
            int temp = solve(val);

            if(temp>maxx)
            {
                maxx = temp;
                ans = i;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}