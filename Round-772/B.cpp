#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bubbleSort()
{
    ll n;
    cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ct=0;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                ct++;
                v[i+1]=max(v[i+1],v[i]);
                if(i+2<n) v[i+1]=max(v[i+1],v[i+2]);
            }
        }
        cout<<ct<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
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