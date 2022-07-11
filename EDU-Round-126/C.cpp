#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define fore1(i,a,b) for(int i=a,ggdem=b;i<=ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

//macros
const int MOD=32768;

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
ll res=1e18;
void solve()
{
    int n; cin>>n;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    int maxi=0;
    vector<int> v(n);
    for(auto &x : v)
    {
        int temp; cin>>temp;
        v.push_back(temp);
        maxi  = max(maxi,temp);
    }
    ll one=0, two=0;
    fore1(i,maxi,maxi+3)
    {
        for(auto &x : v)
        {
            one += (i-x)%2;
            two += (i-x)/2;
        }
    }
    ll test = one+two*2;
    ll days = test/3*2;
    if(test%3 == 1)
        days++;
    if(test%3 ==2)
        days+=2;
    res = min(res,max(one*2-1, days));
    cout<<res<<endl;
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