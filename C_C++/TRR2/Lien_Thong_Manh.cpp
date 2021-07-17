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
void sett()
{
    for (int i = 1; i < 100; i++)
    {
        unused[i] = true;
    }
}
bool DFS(int k)
{

    unused[k] = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[k][i] == 1 && unused[i] == true)
        {
            DFS(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (unused[i] == true)
            return 0;
    }
    return 1;
}
bool Strong_Connected()
{
    sett();
    for (int i = 1; i <= n; i++)
    {
        if (DFS(i) == 0)
            return 0;
        else
        {
            sett();
        }
    }
    return 1;
}
int main()
{

    init();
    if (Strong_Connected() == 1)
        cout << "strongly connected";
    else
        cout << "not strongly connected";
}