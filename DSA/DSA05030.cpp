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
        long long f[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            f[i][0] = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            f[0][i] = 1;
        }
        f[0][0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }
        cout << f[n][m] << endl;
    }

    return 0;
}