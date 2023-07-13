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

        long long ans1 = INT_MAX;
        long long min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            string s;
            cin >> s;

            if(s=="11")
            {
                ans1 = min(ans1, temp);
            }
            if(s=="10")
            {
                min1 = min(min1, temp);
            }
            if(s=="01")
            {
                min2 = min(min2, temp);
            }
        }
        
        if(min1==INT_MAX || min2==INT_MAX)
        {
            if(ans1==INT_MAX)
            {
                cout<<-1<<endl;
                continue;
            }
        }


        cout << min(ans1, min1 + min2) << endl;
    }
    return 0;
}