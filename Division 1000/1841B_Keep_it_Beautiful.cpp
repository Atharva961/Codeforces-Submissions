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

        int beg = -1, end = -1;
        bool flag = false; // Flag = false means array is increasing

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;

            //Array is not in ascending order
            if(flag)
            {
                //the new number needs to be inserted between beg and end
                if(temp>=end && temp<=beg)
                {
                    cout<<1;
                    end = temp;
                }
                else
                {
                    cout<<0;
                }
            }
            else
            {
                if(beg==-1)
                {
                    cout<<1;
                    beg = temp;
                    end = temp;
                }
                else if(temp>=end)
                {
                    cout<<1;
                    end = temp;
                }
                else if(temp<=beg)
                {
                    cout<<1;
                    flag = true;
                    end = temp;
                }
                else
                {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }   
    return 0;
}