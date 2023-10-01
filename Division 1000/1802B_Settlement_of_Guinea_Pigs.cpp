#include<bits/stdc++.h>
using namespace std;

int solve(int count, int aviary)
{
    /*
    count/2 + 1
    */
    int maxx = count/2 + 1;
    int free = aviary - maxx;
    return free;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        vector<int> nums;

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }

        int free = 0, count = 0;
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            if(nums[i] == 1)
            {
                count++;
                if(free)
                {
                    free--;
                }
                else ans++;
            }
            else
            {
                free = solve(count, ans);
            }
        }

        cout<<ans<<endl;
    }   
    return 0;
}