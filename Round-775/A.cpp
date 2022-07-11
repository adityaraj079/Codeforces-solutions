#include <bits/stdc++.h>
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
typedef long long ll;                   //Define ll for long long int
#define rep(i,n) for (ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=0; i<n-1; i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

void solve(){
    ll n; cin>>n;
    bool ok = false;
    vector<int> v;
    rep(i,n)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    rep1(i,n)
    {
        if(v[i]==1 && v[i+1]==1)
        {
            ok=true;
            break;
        }

    }
    if(ok)
        cout<<n-2<<endl;
    else    cout<<n-1<<endl;
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
    return 0;
}