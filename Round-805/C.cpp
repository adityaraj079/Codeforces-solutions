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
    vector <vector<int>> v;
    fore(i,0,n)
    {
        vector<int> temp(2);
        cin>>temp[0]>>temp[1];
        v.push_back(temp);
    }
    unordered_set<int> set1, set2;
    bool ok=false;
    fore(i,0,n)
    {
        int x = v[i][0], y = v[i][1];
        if(x!=y && set1.count(x) ==0 && set1.count(y)==0)
        {
            set1.insert(x);
            set1.insert(y);
        } 
        else if(x!=y && set2.count(x)==0 && set2.count(y)==0){
            set2.insert(x);
            set2.insert(y);
        }
        else{
            cout<<"NO"<<endl;
            ok=true;
            break;
        }
    }
    if(ok)
    {
        continue;
    }
    cout<<"YES"<<endl;

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