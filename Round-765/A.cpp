#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define PB push_back
#define FIN for(i=0;i<n;i++)
#define F(i,k,n) for(i=k;i<n;i++)
#define YES cout<<"YES\n"; 
#define NO cout<<"NO\n"; 
#define MOD 1000000007
#define fi first
#define se second 

typedef vector <ll> vi;
typedef pair< ll ,ll > pii;
typedef vector<vector<ll> > vvi;


bool cmp(pii x,pii y){
    return (x.second<y.second);
}

ll solve(){

    ll n,m,i,j,l,k,x,y,z,ans;
    vi a,b,c,dp;
    string s1;
    cin>>n>>l;
    dp=vi(l,0);
    a=vi(n,0);
    FIN{
        cin>>a[i];
        j=n;
        while(a[i]){
            if(a[i]%2!=1){
                dp[j]++;
            }
            j--;
            a[i]/=2;
        }
    }
    ans=0;
    j=1;
    F(i,0,l){
        if(dp[i]>n-dp[i]){
            ans+=j;
        }
        j*=2;
    }
    cout<<ans<<"\n";
    return 0;
}

int main(){
    ll t=1;
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}