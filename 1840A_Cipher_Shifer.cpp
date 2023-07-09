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
        string s;
        cin >> s;
        vector<int> h(n, 0);

        for (int i = 0; i < s.size(); i++)
        {
            if (h[i] == 0)
            {
                int curr = s[i];
                int j;
                for (j = i + 1; j < s.size(); j++)
                {
                    h[j] = 1;
                    if (s[j] == curr)
                        break;
                }
            }
        }

        string ans;

        for(int i=0; i<s.size(); i++)if(!h[i])ans.push_back(s[i]);

        cout<<ans<<endl;
    }
    return 0;
}