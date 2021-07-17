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
            for (int j = 0; j < n; j++)
            {
                if (i != 0 && i != n - 1)
                {
                    if (j == 0 || j == n - 1)
                        cout << b[i][j] << ' ';
                    else cout <<"  ";
                }
                else
                {
                    cout << b[i][j] << ' ';
                }
            }
            cout << endl;
        }
        cout <<endl;
    }

    return 0;
}