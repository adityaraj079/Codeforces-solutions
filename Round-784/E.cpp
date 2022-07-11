#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define forenew(i,a,b) for(int i=a,ggdem=b;i<ggdem;i+=2)
#define fore1(i,a,b) for(int i=a,ggdem=b;i>=ggdem;i--)
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
    map<char,int> m1,m2;
    vector<string> v;
    map<string,int> test;
    for(auto &x:v)
        cin>>x;
    ll out=0;
    fore1(i,n-1,0)
    {
        int temp = m1[v[i][0]] + m2[v[i][1]] - 2 * test[v[i]];

        out += 1LL*temp;
        m1[v[i][0]]++;
        m2[v[i][1]]++;
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