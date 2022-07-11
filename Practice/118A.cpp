#include <bits/stdc++.h>
using namespace std;

int main()
{
   
        string s, temp;
        cin>>s;

        for(int i=0;i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
            if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
                continue;
            else
            {
                temp+= '.';
                temp+=s[i];
            }
        }
        cout<<temp<<endl;
}