#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        
        deque <int> d;
        d.push_back(arr[0]);
        for (int i=1; i<n;i++)
        {
            int front = d.front();
            if(arr[i] <= front)
                d.push_front(arr[i]);
            else
                d.push_back(arr[i]);
        }
        for (int i:d)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}