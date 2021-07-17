#include <bits/stdc++.h>
using namespace std;

int n, v;
int a[100][100];
bool unused[100];
void init()
{
    cin >> n >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 100; i++)
    {
        unused[i] = true;
    }
}

void Tree_DFS(int u)
{
    unused[u] = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[u][i] == 1 && unused[i] == true)
        {
            unused[i] = false;
            cout << u << " " << i << endl;
            Tree_DFS(i);
        }
    }
}
void Tree_BFS(int u)
{
    queue<int> kq;
    kq.push(u);
    unused[u] = false;
    while (kq.size() > 0)
    {
        int x = kq.front();
        kq.pop();

        for (int i = 1; i <= n; i++)
        {
            if (a[x][i] == 1 && unused[i] == true)
            {
                kq.push(i);
                unused[i] = false;
                cout << x << " " << i << endl;
            }
        }
    }
}
int main()
{
    init();
    cout << "DFS tree" << endl;
    Tree_DFS(v);
    cout << "BFS tree" << endl;
    for (int i = 0; i < 100; i++)
    {
        unused[i] = true;
    }
    Tree_BFS(v);

    return 0;
}