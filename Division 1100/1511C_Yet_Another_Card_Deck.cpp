#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;

    vector<int> nums;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    for(int i=0; i<q; i++)
    {
        int temp;
        cin>>temp;
        auto it = find(nums.begin(), nums.end(), temp);
        cout<<it - nums.begin() + 1<<" ";
        nums.erase(it);
        nums.insert(nums.begin(), temp);
    }

    return 0;
}