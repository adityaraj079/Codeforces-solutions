#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,out=1;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        while (!is_sorted(arr, arr + n))
        {
            if (out % 2)
            {
                for (int i = 0; i < n - 1; i++) {
                if (((i + 1) % 2) and arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                for (int i = 0; i < n - 1; i++) {
                if (!((i + 1) % 2) and arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
            }
            }
            out++;
        }

        cout<<out-1<<endl;
    }

}
