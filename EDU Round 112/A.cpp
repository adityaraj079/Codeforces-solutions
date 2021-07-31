#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;

        if (n<=6)
        {
            ans=15;
        }
        else
        {
            if (n%2 != 0) 
            {
                n++;
            }
            ans = (n*5)/2;

        }
        cout<<ans<<endl;
    }
}