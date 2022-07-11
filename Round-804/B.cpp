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
    int n,m;
    cin>>n>>m;

    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    vector <vector<ll>> v;
    v.push_back({1,0,0,1});
    v.push_back({0,1,1,0});
    v.push_back({0,1,1,0});
    v.push_back({1,0,0,1});
    fore(i,0,n)
    {
        fore(j,0,m)
        {
            cout<<v[i%4][j%4]<<endl;
        }
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