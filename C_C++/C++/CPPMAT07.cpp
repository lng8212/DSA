#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n * n + 1];
        for (int i = 0; i < n * n; i++)
        {
            cin >> a[i];
        }
        int b[n + 1][n + 1];
        int run = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = a[run++];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i%2==0){
                for (int j=0;j<n;j++){
                    cout <<b[i][j]<<' ';
                }
            }
            else {
                for (int j=n-1;j>=0;j--){
                    cout <<b[i][j]<<' ';
                }
            }
        }
        cout <<endl;
    }

    return 0;
}