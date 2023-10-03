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

        if(n==3)
        {
            unordered_map<int, unordered_map<int, int>> m;

            for(int i=0; i<3; i++)
            {
                int a, b;
                cin>>a>>b;
                m[0][a]++;
                m[2][b]++;
            }

            int first = -1, last = -1, mid = -1;
            for(int i=1; i<=3; i++)
            {
                if(m[0][i] == 2)first = i;
                if(m[2][i] == 2)last = i;
                if(m[0][1]!=2 && m[2][i]!=2)mid = i;
            }

            printf("%d %d %d", first, mid, last);
            
            continue;
        }

        unordered_map<int, unordered_map<int, int>> next;

        unordered_map<int, int> m;

        for(int i=0; i<n; i++)
        {
            int prev = -1;
            for(int j=0; j<n-1; j++)
            {
                int temp;
                cin>>temp;
                next[prev][temp]++;

                if(next[prev][temp] >= n-2)
                {
                    m[prev] = temp;
                }
                prev = temp;
            }
        }

        int ptr = m[-1];

        for(int i=0; ; i++)
        {
            cout<<ptr<<" ";
            if(m.find(ptr) == m.end())break;
            ptr = m[ptr];
        }

        cout<<endl;
    }   
    return 0;
}