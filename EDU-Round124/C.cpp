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
bool check(ll array[], ll n)
{   
    bool flag = 0;

    for(ll i = 0; i < n - 1; i++)      
    {         
        if(array[i] != array[i + 1])
           return false;
    }

    return true;
}
//solution
void solve()
{
    ll n; cin>>n;
    ll arra[n];
    ll arrb[n];
    fore(i,0,n)
        cin>>arra[i];
    fore(i,0,n)
        cin>>arrb[i];
    
    if(check(arra,n) && check(arrb,n))
        cout<<2*abs(arra[0]-arrb[0])<<endl;
    
    else
    {
        ll arr[n][n];
        fore(i,0,n)
        {
            fore(j,0,n)
            {
                arr[i][j] = abs(arra[j]-arrb[i]);
            }
        }
        ll ans = INT_MAX;
        fore(i,0,n)
        {
            ll maxi = 0;
            fore(j,0,n)
            {
                maxi += arr[j][i];
            }
            ans = min(maxi,ans);
        }
        cout<<ans<<endl;
    }
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