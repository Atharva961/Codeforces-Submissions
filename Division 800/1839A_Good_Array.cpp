#include <bits/stdc++.h>
using namespace std;

int divide(int a, int b)
{
    if (a % b != 0)
        return (a / b) + 1;
    return a / b;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = 0, count = 0;

        vector<int> nums(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(divide(i+1, k)>count)
            {
                nums[i] = 1;
                count++;
                ans++;
            }
        }

        count = 0;

        for(int i=n-1; i>=0; i--)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else if(divide(n - i, k)>count)
            {
                nums[i] = 1;
                count++;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}