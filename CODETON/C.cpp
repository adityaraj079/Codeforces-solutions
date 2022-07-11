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
    int n,k; 
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    cin>>n;
	vector<int> v;
	int num_1=0, num_0=0;
	fore(i,0,n)
	{
		int temp; cin>>temp;
		v.push_back(temp);
	}
	fore(i,0,n)
	{
		if(v[i] == 1)
			num_1=1;
		else if(v[i] == 0)
			num_0=1;
	}
	if(num_0&&num_1)
	{
		cout<<"NO"<<endl;
		return;
	}
	else if(!num_1)
	{
		cout<<"YES"<<endl;
		return;
	}
	else
	{
		bool found=0;
		sort(v.begin(),v.end());
		fore(i,0,n-1)
		{
			if(v[i]+1 == v[i+1])
				found=1;
		}
		if(found)
		{
			cout<<"NO"<<endl;
			return;
		}
		else
		{
			cout<<"YES"<<endl;
			return;
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