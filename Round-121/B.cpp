#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        map <string,int> m;
        string s; cin>>s;
        int len=s.length();
        bool flag=0;
        for(int i=len-1; i>0; i--)
        {
            int temp = s[i] - '0' + s[i-1] - '0';

            if (temp>9)
            {
                flag=true;
                s[i] = temp %10 +'0';
                s[i-1] = temp/10 +'0';
                break;

            }

        }
        if (flag)
            cout<<s<<endl;
        else
        {
            string s2="";
            s2 = s[0] - '0' +s[1];
            for(int i=2; i<len; i++)
            {
                s2+=s[i];
            }
            cout<<s2<<endl;
        }

        //cout<<s<<endl;
    }
}