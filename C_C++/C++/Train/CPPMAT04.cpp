#include <bits/stdc++.h>
using namespace std;
int X[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int Y[] = {-1, -1, -1, 0, 0, 1, 1, 1};
 int a[101][101];
int n, m;
bool check[101][101];
void Try(int i, int j)
{

    check[i][j] = 1;
    for (int k = 0; k < 8; k++)
    {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && x < n && y >= 0 && y < m && check[x][y] == 0 && a[x][y]==1)
            Try(x, y);
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        memset(check, 0, sizeof(check));
        cin >> n >> m;
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
         
        }
        int S = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check[i][j] == 0 && a[i][j]==1) {
                    S++;
                    Try(i,j);
                }
            }
        }
        cout <<S<<endl;
    }

    return 0;
}