#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
        string s; cin>>s;
        for (int i=0;i<n-1;i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                cout<<i+1<<" "<<i+2<<endl;
                return;
            }
            if(s[i]=='b' && s[i+1]=='a')
            {
                cout<<i+1<<" "<<i+2<<endl;
                return;
            }
        }
        cout<<-1<<" "<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}