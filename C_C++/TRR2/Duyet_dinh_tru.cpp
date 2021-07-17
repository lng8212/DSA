#include <bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
bool unused[100];
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
bool sett()
{
    for (int i = 1; i <= n; i++)
    {
        unused[i] = true;
    }
}
void BFS(int u)
{
    queue<int> kq;
    kq.push(u);
    unused[u] = false;
    while (kq.size() > 0)
    {
        int q = kq.front();
        kq.pop();
        for (int i = 1; i <= n; i++)
        {
            if (a[q][i] == 1 && unused[i] == true)
            {
                unused[i] = false;
                kq.push(i);
            }
        }
    }
}
void solve()
{
    sett();
    for (int i = 1; i <= n; i++)
    {
        unused[i] = false;
        if (i>1) BFS(1);
        else BFS(2);
        bool kt = 0;
        for (int j = 1;j<=n;j++){
            if (j!=i && unused[j]==true) kt = 1;
        }
        if (kt==1) cout <<i<<" ";
        sett();
    }
   
}
int main()
{
    init();
    solve();

    return 0;
}