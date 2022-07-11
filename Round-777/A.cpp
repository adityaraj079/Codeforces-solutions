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
     ll n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '1')
                {
                    if (i + 1 < n && a[i + 1][j] == '1' && j + 1 < m && a[i][j + 1] == '1' && a[i + 1][j + 1] == '0')
                    {
                        check = true;
                    }
                    if (i + 1 < n && a[i + 1][j] == '1' && j - 1 >= 0 && a[i][j - 1] == '1' && a[i + 1][j - 1] == '0')
                    {
                        check = true;
                    }
                    if (i - 1 >= 0 && a[i - 1][j] == '1' && j + 1 < m && a[i][j + 1] == '1' && a[i - 1][j + 1] == '0')
                    {
                        check = true;
                    }
                    if (i - 1 >= 0 && a[i - 1][j] == '1' && j - 1 >= 0 && a[i][j - 1] == '1' && a[i - 1][j - 1] == '0')
                    {
                        check = true;
                    }
                }
            }
        }
        if (check)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    

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