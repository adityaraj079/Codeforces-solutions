#include <bits/stdc++.h>
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

void solve()
{
    ll n; cin>>n;
    vector<int> v;
    fore(i,0,n)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll red=v[n-1], blue=v[0]+v[1];
    int i=2, j=n-2;
    while(red <= blue )
    {
        if(i<j)
        {
            blue+=v[i++];
            red+=v[j--];
        }
        else
            break;
    }
    if(red>blue)
        cout<<"YES"<<endl;

    else    cout<<"NO"<<endl;
    
}

int main()
{
	FastIO
	int t; cin>>t;
	while(t--)
	{
		solve();
		
	}
	/* rep(i,N); 
	{
		
	}
	This is loop from 0 to N-1
	*/
	
	/* rep1(i,N); 
	{
		
	}
	This is loop from 1 to N
	*/
}