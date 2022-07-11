#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int r, int c)
{
    int count=0;
    char mat[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
            if (mat[i][j] == 'W')
                count++;
        }
    }
    if (count == n*m)
        return -1;
    if (mat[r-1][c-1] == 'B')
        return 0;

    
    for(int i=0; i<m; i++)
    {
        if(mat[r-1][i] == 'B')
            return 1;
    }
    for(int i=0; i<n; i++)
    {
        if(mat[c-1][i] == 'B')
            return 1;
    }
    
    return 2;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        
        cout<<solve(n,m,r,c)<<endl;
    }
}