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
int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
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
    int v[n];
    map<int,int> mp;
    fore(i,0,n)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    
    int out=0;
    ll arr = -INT_MAX, clone = -INT_MAX;
    for(auto it: mp)
    {
        if(it.second <= clone)
            continue;
        clone = it.second;
        arr = it.first;
    }
    ll r = n-clone;
    while(r>0)
    {
        out++;
        if(r > clone)
        {
            out+=clone;
            r -= clone;
            clone *=2;
        }
        else
        {
            out += r;
            break;
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