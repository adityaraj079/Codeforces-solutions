#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--)
   {
       int n; cin>>n;
       vector <int> v;
       for(int i=0; i<n; i++)
       {
           int temp; cin>>temp;
           v.push_back(temp);
       }
       bool ok = false;
       for(int i=0;i<n;i++)
       {
           for(int j=i+2;j<n;j++)
           {
               if(v[i] == v[j])
                ok=true;
           }
       }
       if(ok)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
   }
}