#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,a2,b1,b2,f1,f2;
        cin>>a1>>a2>>b1>>b2>>f1>>f2;
        int dis=abs(a1-b1)+abs(a2-b2);
        if (a1 != b1 && a2 != b2)
        {
            cout<<dis<<endl;
        }
        else if(dis == (abs(a1-f1)+abs(a2-f2)+abs(b1-f1)+abs(b2-f2)))
        {
            cout<<dis+2<<endl;
        }
        else
        {
            cout<<dis<<endl;
        }
    }
}