#include <bits/stdc++.h>

using namespace std;
int V, E;
vector<bool> dd;
vector<vector<int> > x;
int dem, res;
void init()
{
    dd.clear();
    x.clear();
    cin >> V >> E;
    dd.resize(V + 1, 0);
    x.resize(V + 1);
    dem = 0;
    res = 0;

    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
}
void dfs(int u)
{
    dd[u] = 1;
    dem++;
    for (int v = 0; v < x[u].size(); v++)
    {
        if (dd[x[u][v]] == 0)
            dfs(x[u][v]);
    }
}
void solve()
{

    for (int i = 1; i <= V; i++)
        if (dd[i] == 0)
        {
            dfs(i);
            res = max(res, dem);
            dem = 0;
        }
    cout << res << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
}