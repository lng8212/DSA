#include <bits/stdc++.h>
using namespace std;
int n, m;
void Run()
{
    cin >> n >> m;
    int a[101][101] = {};
    int b[101][101] = {};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    int tren = 1, duoi = n, trai = 1, phai = m;
    int tren1 = 1, duoi1 = n, trai1 = 1, phai1 = m;
    int d = n * m;
    while (d >= 1)
    {
        vector<int> res;
        bool ok = 1;
        for (int i = trai; i <= phai; i++)
        {
            if (d < 1)
            {
                ok = 0;
                break;
            }
            res.push_back(a[tren][i]);
            d--;
        }
        tren++;
        for (int i = tren; i <= duoi; i++)
        {
            if (d < 1)
            {
                ok = 0;
                break;
            }
            res.push_back(a[i][phai]);
            d--;
        }
        phai--;
        for (int i = phai; i >= trai; i--)
        {
            if (d < 1)
            {
                ok = 0;
                break;
            }
            res.push_back(a[duoi][i]);
            d--;
        }
        duoi--;
        for (int i = duoi; i >= tren; i--)
        {
            if (d < 1)
            {
                ok = 0;
                break;
            }
            res.push_back(a[i][trai]);
            d--;
        }
        trai++;
        res.push_back(res[res.size() - 1]);
        for (int i = res.size() - 2; i > 0; i--)
        {
            res[i] = res[i - 1];
        }
        res[0] = res[res.size() - 1];
        int dem = 0;
        for (int i = trai1; i <= phai1; i++)
        {
            b[tren1][i] = res[dem];
            dem++;
        }
        tren1++;
        for (int i = tren1; i <= duoi1; i++)
        {
            b[i][phai1] = res[dem];
            dem++;
        }
        phai1--;
        for (int i = phai1; i >= trai1; i--)
        {
            b[duoi1][i] = res[dem];
            dem++;
        }
        duoi1--;
        for (int i = duoi1; i >= tren1; i--)
        {
            b[i][trai1] = res[dem];
            dem++;
        }
        trai1++;
        if (ok == 0)
            break;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << b[i][j] << ' ';
        }
    }
    cout << endl;
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
        Run();
    return 0;
}