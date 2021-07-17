#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[102][102];
bool ok[102][102];
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
void DFS(int i, int j)
{
    ok[i][j] = 1;
    for (int z = 0; z < 8; z++)
    {
        int x = i + X[z];
        int y = j + Y[z];
        if (x >= 1 && y >= 1 && x <= n && y <= m && a[x][y] == 'W' && ok[x][y] == 0)
            DFS(x, y);
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    int S = 0;
    memset(ok, 0, sizeof(ok));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 'W' && ok[i][j] == 0)
            {
                S++;
                DFS(i, j);
            }
        }
    }
    cout << S;
    return 0;
}