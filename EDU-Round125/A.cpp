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

bool check(ll mid, ll n)
{
    return((mid*(mid+1))/2 <=n) ;
}

//solution
int solve()
{
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0)
        return 0;
    double dis = sqrt(pow(0-x,2)+pow(0-y,2));
    if(dis == (int)dis)
        return 1;
    else
        return 2;
    
}

//main function
int main()
{
	FastIO
	int t; cin>>t;
	while(t--)
	{
		cout<<solve()<<endl;
		
	}
	
}