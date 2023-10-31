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

        vector<int> nums;
        int min_value = INT_MAX, min_index = -1;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
            if(temp < min_value)
            {
                min_value = temp;
                min_index = i;
            }
        }

        if(n%2==1)
        {
            cout<<"Mike"<<endl;
            continue;
        }

        string ans = "";
        
        if(min_index%2 == 0)ans = "Joe";
        else ans = "Mike";
        
        cout<<ans<<endl;
    }
    return 0;
}

