#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> nums;
        
        int minn = -1;//Minimum possible and value 

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
            if(minn==-1)minn = temp;
            else minn&=temp;
        }

        if(minn!=0)
        {
            cout<<1<<endl;
            continue;
        }

        int ans = 0;
        int andd = nums[0];
        for(int i=0; i<n; i++)
        {
            andd = nums[i];
            int j = i + 1;
            while(j<n && andd!=minn)
            {
                andd&=nums[j];
                j++;
            }
            i = j-1;
            if(andd == minn)ans++;
        }
        if(andd==minn)ans++;

        cout<<ans<<endl;
    }   
    return 0;
}