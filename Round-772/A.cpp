#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bubbleSort()
{
    ll n;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n;i++)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    int max = v[0];
    for(int i=1; i<n; i++)
    {
        max |= v[i];
    }
    cout<<max<<endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        bubbleSort();
    }
    
}