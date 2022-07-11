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
    
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    string s; cin>>s;
    int out=1;
    string temp;
    if(s.length() == 1)
    {
        cout<<1<<endl;
        return;
    }
    set <char> a;
    fore(i,0,s.length())
    {
        a.insert(s[i]);
        if(a.size()==4)
        {
            a.clear();
            out++;
            a.insert(s[i]);
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