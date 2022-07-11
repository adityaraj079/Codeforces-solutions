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
    vector<int> v;
    fore(i,0,n)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    map<int,int> m;
    for(auto x:v)
        m[x]++;
    int out=-1;
    for(auto it=m.begin(); it != m.end(); it++)
    {
        if(it->second >= 3)
            out=it->first;
        
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