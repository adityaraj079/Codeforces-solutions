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
        int len=s.length(), occ_a=0, occ_b=0,occ_c=0;
        for (int i=0; i<len; i++)
        {
            if (s[i] == 'A')
                occ_a++;
            else if (s[i] == 'B')
                occ_b++;
            else if (s[i] == 'C')
                occ_c++;
        }
        
        if (occ_b == (occ_a+occ_c))
            cout<<"YES"<<endl;
            
        else
            cout<<"NO"<<endl;
    }
}