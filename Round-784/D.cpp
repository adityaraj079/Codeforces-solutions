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
    int n;
    string s;
    cin>>n>>s;

    bool flag = 1;

    fore(i,0,n)
    {
        if(s[i] == 'W')
            continue;
        else
        {
            int test_a=0, test_b=0;
            int count=i;
            while(count<n && s[count] != 'W')
            {
                if(s[count] == 'R')
                    ++test_a;
                else if (s[count] == 'B')
                    ++test_b;
                count++;
            }
            if(test_a == 0 || test_b == 0)
                flag=0;
            i=count-1;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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