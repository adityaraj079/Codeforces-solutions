#include <bits/stdc++.h>
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    FastIO;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> inp, compare;
        vector<int> test;
        for(int i=0; i<n; i++)
        {
            int temp; cin>>temp; 
            inp.push_back(temp);
        }
        for(int i=0; i<n; i++)
        {
            int temp; cin>>temp; 
            compare.push_back(temp);
        }
        sort(inp.begin(), inp.end());
        sort(compare.begin(), compare.end());
        
        bool flag = true;
        for (int i=0; i<n; i++)
        {
            if (inp[i] == compare[i] || inp[i]+1 == compare[i])
                continue;
            else
            {
                flag = false;
                break;
            }
            
        }
        if (flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}