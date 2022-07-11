#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    if(y1==y2 && y3<y1)
        return abs(x2-x1);

    else if (y3==y1 && y2<y1)
        return abs(x3-x1);
    else if (y3==y2 && y1<y3)
        return abs(x3-x2);
    else
        return 0;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
}