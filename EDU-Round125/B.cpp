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
void solve()
{
    int n,B,x,y;
    cin>>n>>B>>x>>y;
    
   ll out=0, temp=0;
   fore(i,0,n)
   {
       if(temp+x > B)
       {
           out+= (temp-y);
           temp -= y;
       }
       else
       {
           out += (temp+x);
           temp += x;
       }

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