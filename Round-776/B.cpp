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
    int l,r,a;
    cin>>l>>r>>a;

    int out = (r/a) + (r%a);
    if(r-1 >= l && r%a==0)
        out = max(out, ((r-1)/a)+((r-1)%a));
    int temp=r/a;
    temp *= a;

    if(temp-1>=l)
        out = max(out, ((temp-1)/a)+((temp-1)%a));
    // out%=1000000007;
    cout<<out<<endl;

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