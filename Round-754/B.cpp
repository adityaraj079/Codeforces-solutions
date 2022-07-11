#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll d, da, a, b, c;
        cin>>d>>da>>a>>b>>c;
        ll dis = d*da;
        
        if(dis >= 42)
            cout<<c<<endl;
        else if(dis >= 21)
            cout<<b<<endl;
        else if(dis >= 10)
            cout<<a<<endl;
        else
            cout<<0<<endl;

    }
}