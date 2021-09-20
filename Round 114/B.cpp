#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll arr[3] = {a,b,c};
        sort(arr,arr+3);
        ll max = a+b+c-3;
        ll min = arr[2]-arr[1]-arr[0]-1;
        if(m >= min && m <= max)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}