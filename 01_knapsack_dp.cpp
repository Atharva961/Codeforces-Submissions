#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& w, vector<int>& p, int capacity, int index)
{
    if(index>=w.size())return 0;
    if(capacity==0)return 0;
    int take = 0;
    if(w[index]<=capacity)
    {
        take = p[index] + solve(w, p, capacity-w[index], index+1);
    }
    int leave = solve(w, p, capacity, index+1);
    return max(take, leave);
}
int main()
{
    vector<int> w = {4,6,8};
    vector<int> p = {10,12,15};
    int capacity = 10;
    int dp[4][11];
    for(int i=0; i<11; i++)dp[0][i] = 0;
    for(int i=0; i<4; i++)dp[i][0] = 0;

    
    return 0;
}