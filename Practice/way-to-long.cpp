#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length() > 10)
        {
            string out;
            out += s[0];
            int temp = (s.length()-2);
            string add = to_string(temp);
            out += add;
            out += s[s.length()-1]; 

            cout<<out<<endl;
        }
        else
            cout<<s<<endl;
    }
}