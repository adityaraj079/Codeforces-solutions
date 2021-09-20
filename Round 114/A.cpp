#include <bits/stdc++.h>
using namespace std;

void pr(int n)
{
    for (int i=1; i<=n; i++)
    {
        cout<<"(";
    }
    for (int i=1; i<=n; i++)
    {
        cout<<")";
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for (int i=1; i<=n; i++)
        {
            pr(i);
            pr(n-i);
            cout<<endl;
        }
        
    }
}
