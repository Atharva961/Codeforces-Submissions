#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int ia, ja, ib, jb, ic, jc;

        cin>>ia>>ja;
        cin>>ib>>jb;
        cin>>ic>>jc;

        int i0, i1, j0, j1;

        bool a = ((ia>=ib) && (ia<=ic)) || ((ia<=ib) && (ia>=ic));
        bool b = ((ja>=jb) && (ja<=jc)) || ((ja<=jb) && (ja>=jc));

        if(a&&b)
        {
            cout<<1<<endl;
            continue;
        }
        if(a)
        {
            cout<<min(abs(ja - jc), abs(ja - jb)) + 1<<endl;
            continue;
        }
        if(b)
        {
            cout<<min(abs(ia - ic), abs(ia - ib)) + 1<<endl;
            continue;
        }

        cout<<min(abs(ja - jc), abs(ja - jb)) + min(abs(ia - ic), abs(ia - ib)) + 1<<endl;
    }
    return 0;
}