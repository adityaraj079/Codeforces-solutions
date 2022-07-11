#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define fors(i,a,b) for(int i=a,ggdem=b;i<=ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

//macros
#define MOD 1000000007
const int N = 1e6 + 10; 
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
int dp[N], temp[N];
//solution
void solve()
{
    string str; cin>>str;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    str =" "+str;
    set<ll> s[30];
    fors(i,1,str.size())
    {
        s[str[i] - 'a'].insert(i);
        dp[i] = temp[i] =0;
    }
    fors(i,1,str.size())
    {
        temp[i] =  max(temp[i-1], dp[i]);
        auto it = s[str[i] - 'a'].upper_bound(i);
        if(it ==s[str[i] - 'a'].end() ) 
            continue;
        int j= *it;
        dp[j] = max(dp[j],temp[i-1]+1);
    }
    int out= 0;
    fors(i,1,str.size())
    {
        out = max(out, dp[i]);
    }
    cout<<str.size()-(out*2)<<endl;
    
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