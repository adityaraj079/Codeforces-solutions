#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}

int findNcR(int n, int r)
{
    return findFact(n) / (findFact(n - r) * findFact(r));
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll tst = 2*n;
        tst = findFact(n);
        cout<<(tst)%1000000007<<endl;
    }
}