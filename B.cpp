#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector <int> v;
        fore(i,0,n)
        {
            int temp; cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int out=0,sum=0;
        int z=n/2;
        if(n%2==0)
            z--;
        fore(i,0,z)
        {
            out+=v[i];
        }
        if(out>sum-out)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}