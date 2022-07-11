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
    int n; cin>>n;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    int v[2][25];
    fore(i,0,2)
    {
        fore(j,0,n)
        {
            cin>>v[i][j];
        }
    }
    ll out=0;
    fore(i,1,n)
    {
        ll a=abs(v[0][i]-v[0][i-1]) + abs(v[1][i]-v[1][i-1]);
        ll b=abs(v[1][i]-v[0][i-1]) + abs(v[0][i]-v[1][i-1]);
        if(b<a)
            swap(v[0][i],v[1][i]);
        out += min(a,b);
    }
    cout<<out<<endl;
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