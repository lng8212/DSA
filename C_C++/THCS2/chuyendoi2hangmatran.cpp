#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[100][100];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b, c;
    cin >> b >> c;
    for (int j = 1; j <= n; j++)
    {
        int *tmp1, *tmp2;
        for (int i = 1; i <= m; i++)
        {
            if (i == b)
                tmp1 = &a[i][j];
            if (i == c)
                tmp2 = &a[i][j];
        }
        swap(*tmp1, *tmp2);
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}