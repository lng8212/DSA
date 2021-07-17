#include <bits/stdc++.h>
using namespace std;
bool check[1000];
vector<int> a[1000];
void BFS(int u, int e)
{
    queue<int> q;
    q.push(u);
    check[u] = true;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        if (u == e)
        {
            cout << "YES";
            return;
        }
        for (int i = 0; i < a[u].size(); i++)
        {
            int v = a[u][i];
            if (!check[v])
            {
                check[v] = true;
                q.push(v);
            }
        }
    }
    cout << "NO";
}
int main()
{
    long long n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    BFS(1, n);
}