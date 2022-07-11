#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define forenew(i,a,b) for(int i=a,ggdem=b;i<ggdem;i+=2)
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
    if(n==1)
        cout<<"YES"<<endl;
    
    else
    {
        bool flag=true;
        int par_odd=v[0]&1, par_even=v[1]&1;
        forenew(i,2,n)
        {
            if ((v[i] & 1) != par_odd)
                flag = false;
        }
        forenew(i,3,n)
        {
            if ((v[i] & 1) != par_even)
                flag = false;
            
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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