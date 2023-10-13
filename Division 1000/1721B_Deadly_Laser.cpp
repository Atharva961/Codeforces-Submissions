#include<bits/stdc++.h>
using namespace std;

long long x, y, dist;

long long distance(long long i, long long j)
{
    return abs(x-i) + abs(y-j);
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n, m, sx, sy, d;
        cin>>n>>m>>sx>>sy>>d;
        x = sx - 1;
        y = sy - 1;
        dist = d;
       
        long long ans = n + m - 2;
        bool last_row = false, first_row = false, last_col = false, first_col = false;

        for(int i=0; i<n; i++)
        {
            if(distance(i, 0)<=dist && distance(i, m-1)<=dist)
            {
                ans = -1;
                break;
            }
            if(distance(i, 0) <= dist)
            {
                first_col = true;
            }
            if(distance(i, m-1) <= dist)
            {
                last_col = true;
            }
        }

        if(ans == -1)
        {
            cout<<ans<<endl;
            continue;
        }

        for(int i=0; i<m; i++)
        {
            if(distance(0, i)<=dist && distance(n-1, i)<=dist)
            {
                ans = -1;
                break;
            }
            if(distance(0, i)<=dist)
            {
                first_row = true;
            }
            if(distance(n-1, i)<=dist)
            {
                last_row = true;
            }
        }

        if(first_col && first_row)ans = -1;
        if(last_col && last_row)ans = -1;

        cout<<ans<<endl;
    }  
    return 0;
}