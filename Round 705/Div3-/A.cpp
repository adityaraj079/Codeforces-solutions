#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        long long int n,m,x, test=1;
        cin>>n>>m>>x;
        long long int column_mat[n][m], row_mat[n][m];
        for (long long int i=0; i<n; i++)
        {
            for (long long int j=0; j<m; j++)
            {
                column_mat[i][j] = test;
                row_mat[j][i] = test;
                test++;
            }
        }
        int input = column_mat[test][0];
    }
}