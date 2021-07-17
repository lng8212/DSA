#include <bits/stdc++.h>
using namespace std;

int n, u;
int a[1005][1005];
int d[1005];

void init()
{
    memset(a, 0, sizeof(a));
    cin >> n >> u;
    for (int i = 0; i < u; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 0)
                a[i][j] = INT_MAX;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = a[1][i];
        
    }
    
    d[1] = 0;
}
void Bellman_Ford()
{
    int k = n - 2;
    while (k--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (d[j] + a[j][i] < d[i] && a[j][i] != INT_MAX)
                    {
                        d[i] = d[j] + a[j][i];
                    }
                }
            }
        }
    }
}
int ktra()
{
    for (int i = 1; i <= n; i++)
    {
        if (1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (d[j] + a[j][i] < d[i] && a[j][i] != INT_MAX)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        Bellman_Ford();
        cout <<ktra()<<endl;
    }

    return 0;
}