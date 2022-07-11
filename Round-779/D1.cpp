#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<=ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

//macros
#define MOD 998244353

ll l,r,out,o1[22],o2[22],z1[22],z2[22];
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

ll fact(ll n)
{
    ll out=1;
    fore(i,1,n+1)
    {
        out = (out*i) %MOD;
    }
    return out;
}
void first(ll n)
{
    fore(i,0,18)
    {
        if(n%2)
            o1[i]++;
        else
            z1[i]++;
        n/=2;
    }
}

void second(ll n)
{
    fore(i,0,18)
    {
        if(n%2)
            o2[i]++;
        else
            z2[i]++;
        n/=2;
    }
}
//solution
void solve()
{
    memset(z1, 0LL, sizeof(z1)); 
    memset(z2, 0LL, sizeof(z2)); 
    memset(o1, 0LL, sizeof(o1)); 
    memset(o2, 0LL, sizeof(o2)); 
    cin>>l>>r;
    int size = r-l+1;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    fore(i,l,r)
        first(i);
    
    fore(i,l,r)
    {
        ll x; cin>>x;
        second(x);
    }
    ll out=0, temp=1;
    fore(i,0,20)
    {
        if(o1[i] != o2[i] || z1[i] != z2[i])
        
            out+=temp;

        temp *=2;
        
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