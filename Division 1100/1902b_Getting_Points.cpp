#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, p, l, t;
        cin>>n>>p>>l>>t;

        long long daily_points_with_task = 2*t + l;

        long long days_required_with_just_task = p/daily_points_with_task + (p%daily_points_with_task != 0);

        long long max_days_allowed = (n/7 + 1)/2;

        if(days_required_with_just_task <= max_days_allowed)
        {
            cout<<n - days_required_with_just_task<<endl;
            continue;
        }

        p-=(max_days_allowed * daily_points_with_task);

        if(p <= 0)
        {
            cout<<n - max_days_allowed<<endl;
            continue;
        }

        long long required_days = p/l + (p%l != 0);
        long long ans = n - max_days_allowed - required_days;

        cout<<ans<<endl;
    }
    return 0;
}