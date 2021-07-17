#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m >= n)
    {
        int k = m;
        int z;
        for (int i = 1; i <= m; i++)
        {
            z = k - n;
            if (z > 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    char c = n + 64;
                    cout << c;
                }
                k--;
            }
            else
            {
                if (n - i + 1 > 0)
                {
                    for (int j = n - i + 1; j <= n - 1; j++)
                    {
                        char c = j + 65;
                        cout << c;
                    }
                }
                // for (int j = i; j <= n; j++)
                // {
                //     char c = n + 64;
                //     cout << c;
                // }
            }
            cout << endl;
        }
    }
    return 0;
}