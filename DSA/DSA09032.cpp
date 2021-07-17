#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
int n, m, tmp, ans;
vector<int> unused;
void resetx()
{
    
    unused.clear();
    unused.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
        unused[i] = 0;
    }
}
void init()
{
    cin >> n >> m;

    ans = 0;
    a.clear();
    a.resize(n + 1);
    resetx();
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
}
void DFS(int u)
{
    unused[u] = 1;
    for (int i = 0; i < a[u].size(); i++)
    {
        if (unused[a[u][i]] == 0)
        {
            DFS(a[u][i]);
            tmp++;
        }
    }
    ans = max(ans, tmp);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        for (int i = 1; i <= n; i++)
        {
            tmp = 0;
            DFS(i);
        }
        cout<<ans+1<<endl;
    }

    return 0;
}