#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int sum[n + 1][m + 1];
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                    sum[i][j] = a[i][j];
                else
                    if (a[i][j]==0 ) sum[i][j]=0;
                    else sum[i][j]=sum[i-1][j] + a[i][j];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            int dd[n + 1] = {0};
            for (int j = 0; j < m; j++)
            {
                dd[sum[i][j]]++;
            }
            int rw = 0;
            for (int j = n; j >= 0; j--)
            {
                if (dd[j] > 0)
                {
                    for (int k = 0; k < dd[j]; k++)
                    {
                        sum[i][rw] = j;
                        rw++;
                    }
                }
            }
        }
    //    for (int i = 0;i<n;i++){
    //         for (int j = 0;j<m;j++){
    //             cout <<sum[i][j]<<' ';
    //         }
    //         cout <<endl;
    //     }
         int ans = 0;
        for (int i = 0; i < n; i++)
        {   
            int k;
            for (int j = 0; j < m; j++)
            {
                k = sum[i][j] * (j + 1);
                ans = max (ans,k);
            }
            
        }
        cout <<ans << endl;
    }
    return 0;
}