#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==3)
        {
            cout<<3<<" "<<2<<" "<<1<<endl;
            cout<<3<<" "<<1<<" "<<2<<endl;
            cout<<1<<" "<<3<<" "<<2<<endl;
            continue;
        }
        vector <int> v;
        for(int i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        reverse(v.begin(), v.end());
        for(int i=0;i<n; i++)
        {
            for(int j=n-i; j<n; j++)
            {
                cout<<v[j]<<" ";
            }
            for(int j=0; j<n-i;j++)
            {
                cout<<v[j]<<" ";
            }cout<<endl;
        }
    }
}