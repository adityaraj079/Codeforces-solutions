#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout << max(0LL,1+max(b,c)-a) << " " << max(0LL,1+max(a,c)-b) << " " << max(0LL,1+max(b,a)-c) << endl;
    }
}