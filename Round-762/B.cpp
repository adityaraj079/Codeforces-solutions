#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int n=s.size(),temp=0;
        if (n%2 != 0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            for(int i=0; i<n/2; i++)
            {
                if(s[i] != s[i+(n/2)])
                {
                    temp=1;
                    break;
                }
            }
            if(temp == 1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
}
int countSC(int N) 
{ 
    int res = (int)sqrt(N) + (int)cbrt(N) 
              - (int)(sqrt(cbrt(N))); 
  
    return res; 
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        cout<<countSC(s)<<endl;
    }

    
}