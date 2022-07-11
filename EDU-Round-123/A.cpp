#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int found=0;
        for(int i=0; i<=s.length(); i++)
        {
            if(s[i] == 'R')
            {
                for(int j=i; j>=0; j--)
                {
                    if(s[j] == 'r')
                        found++;
                }
            }
            else if(s[i] == 'G')
            {
                for(int j=i; j>=0; j--)
                {
                    if(s[j] == 'g')
                        found++;
                }
            }
            else if(s[i] == 'B')
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(s[j] == 'b')
                        found++;
                }
            }
        }
        if(found == 3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}