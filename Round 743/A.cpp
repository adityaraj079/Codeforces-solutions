#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--) 
    {
        int n;
        string s;
        cin >> n >> s;
		int idx = 0,cnt=0;
		for(int i = 0; i < n-1; i++)
		{
			if(s[i] != '0')
			{
				cnt+=(s[i]-'0');
                cnt++;
			}
		}
		cnt+=(s[n-1]-'0');
		cout << cnt << endl;
    }
    return 0;
}