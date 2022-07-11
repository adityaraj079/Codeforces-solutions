#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> odd;
        int ans=0,l=0;
        for(int i=0; i<n; i++)
        {
            int temp; cin>>temp;
            odd.push_back(temp);
        }
        // if(n == 1)
        // {
        //     cout<<odd[0]<<endl;
        //     continue;
        // }
        sort(odd.begin(), odd.end());
        for(int i=0; i<=n-1; i++)
        {
            while (odd[i] % 2 ==0)
            {
                odd[i] /=2;
                odd[n-1] *=2;
            }
            l += odd[i];
            
        }
        cout<<odd[n-1]+l<<endl;
    }
}