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
    vector <int> v;
    fore(i,0,n)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    int min=v[0],o1=0,max=v[0],o2=0;
    fore(i,0,n)
    {
        if(v[i] <min)
        {
            min=v[i];
            o1=i;
        }
        if(v[i] > max)
        {
            max=v[i];
            o2=i;
        }
    }
    cout<<o1+1<<" "<<o2+1<<endl;
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