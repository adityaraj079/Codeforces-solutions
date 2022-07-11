#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(ll temp)
{
    if (temp%3 == 1)
        return 1;
    else 
        return 0;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll temp=a+b+c;
        if (temp%3 >= 1)
            cout<<1<<endl;
        else
            cout<<0<<endl;

    }
    return 0;
}