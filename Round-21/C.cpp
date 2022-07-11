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
    ll n,x,k;
    ll test1=0,test2=0;  
    cin>>n>>k;  
    vector<pair<ll,ll>> v,adiv;  
    fore (i,0,n)
    {  
        cin>>x;  
        test1+=x;  
        if (v[v.size()-1].first==x && i!=0)   
            v[v.size()-1].second++;  
        else if (x%k==0) 
        {  
            ll c,temp=1;  
            while (x%k==0)
            {  
                temp*=k;  
                c=x/k;  
                x/=k;  
            }  
            if (i!=0&&v[v.size()-1].first==c) 
                v[v.size()-1].second+=temp;  
            else v.push_back({c,temp});  
        }  
        else v.push_back({x,1});  
        }  

        cin>>n;  
        fore (i,0,n)
        {  
            cin>>x;  
            test2+=x;  
            if (adiv[adiv.size()-1].first==x && i!=0) 
                adiv[adiv.size()-1].second++;  
            else if (x%k==0) 
            {  
                ll c,temp=1;  
                while (x%k==0)
                {  
                    temp*=k;  
                    c=x/k;  
                    x/=k;  
                }  
                if (i!=0&&adiv[adiv.size()-1].first==c) adiv[adiv.size()-1].second+=temp;  
                else adiv.push_back({c,temp});  
            }  
            else adiv.push_back({x,1});  
        }  
        
        int yes=1;  
        if (adiv.size()!=v.size() || test1!=test2) 
            yes=0;  
        else {  
            for (int i=0;i<v.size();i++)
            {  
                if (v[i].first!=adiv[i].first||v[i].second!=adiv[i].second) 
                    yes=0;  
            }  
        }  
        if (yes) 
            cout<<"Yes"<<endl;  
        else 
            cout<<"No"<<endl;  
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