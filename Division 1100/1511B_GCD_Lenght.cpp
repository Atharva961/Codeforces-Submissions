#include<bits/stdc++.h>
using namespace std;

long long width(long long n)
{
    string s = to_string(n);
    return s.length();
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a, b, c;
        cin>>a>>b>>c;

        long long hcf = pow(10, c-1);

        long long val1 = hcf, val2 = hcf;

        while(width(val1)!=a)val1*=2;
        while(width(val2)!=b)val2*=3;
        
        cout<<val1<<" "<<val2<<endl;
    }
    return 0;
}