#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

//macros
#define MOD 1000000007

// Mathematical functions
int GCD(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}
int LCM(int a, int b)
{
	return ((ll)a * b) / GCD(a, b);
}

//solution
void solve()
{
    ll n; cin>>n;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    bool ok = true;
    vector<ll> v;
    fore(i,0,n)
    {
        ll temp; cin>>temp;
        v.push_back(temp);
    }
    if(n==1 && v[0]>1)
    {
        ok = false;
    }
    else{
        sort(v.begin(), v.end());
        for(int i=n-1; i>=1; i--)
        {
            if(v[i]-v[i-1] > 1)
            {
                ok = false;
            }
            v[i-1] = v[i]-v[i-1];
        }
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

//main function
int main()
{
	FastIO
	int t; cin>>t;
	while(t--)
	{
		solve();
		
	}
	
}