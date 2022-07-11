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
    for(int i=0;i<n;i++)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    
    bool ok = false;
    for(int i=0;i<((1<<n)-1);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                sum+=v[j];
            
            else    sum-=v[j];
        }
        if(sum %360 == 0)
            ok=true;
    }

    //sum = ((sum%360)+360)%360;
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}

int main()
{
	FastIO
	
	solve();
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