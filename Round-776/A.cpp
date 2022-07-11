#include <bits/stdc++.h>
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
typedef long long ll;                   //Define ll for long long int
#define rep(i,n) for (ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=1; i<=n; i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

void solve()
{
    string s;
    cin>>s;
    char c;
    cin>>c;
    bool ok=false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == c)
        {
            int temp=s.length() - (i+1);
            if(i%2==0 && temp%2==0)
            {
                ok = true;
                break;
            }
        }
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
	FastIO
	ll t; cin>>t;
	while(t--)
	{
		solve();
	}
	/* rep(i,N); 
	{
		
	}
	This is loop from 0 to N-1
	*/
	
	/* rep1(i,N); 
	{
		
	}
	This is loop from 1 to N
	*/
}