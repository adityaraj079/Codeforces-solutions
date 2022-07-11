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
const int MOD=32768;

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
int temp;
void solve()
{
    int n;
    /* fore(i,a,b)
	{
		
	}
	This is loop from a to b
	*/
    int a[MOD+8];
    memset(a,-1, sizeof(a));
    vector<int> v[MOD+8];
    queue<int> q;
    fore(i,0,MOD)
    {
        v[(i+1)%MOD].push_back(i);
        v[(i*2)%MOD].push_back(i);
    }
    a[0] = 0;
    q.push(0);
    while (!q.empty())
    {
        /* code */
        temp = q.front();
        q.pop();
        {
            for(int test : v[temp])
            {
                if(a[test] == -1)
                {
                    a[test] = a[temp]+1;
                    q.push(test);
                }
            }

        }
    }
    cin>>n;
    while(n--)
    {
        cin>>temp;
        cout<<a[temp]<<" ";
    }
    return; 
}

//main function
int main()
{
	FastIO
	solve();
	
}