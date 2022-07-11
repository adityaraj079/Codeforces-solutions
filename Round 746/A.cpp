#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,H; cin>>n>>H;
        vector <int> v;
        for (int i=0; i<n; i++)
        {
            int temp; cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int flag=0;
        while(H<=0)
        {
            int temp = v[n];
            if (temp <= H)
            {
                H -= temp;
                flag++;
            }
            else
            {
                temp = v[n-1];
            }
        }
        cout<<flag<<endl;
    }
}