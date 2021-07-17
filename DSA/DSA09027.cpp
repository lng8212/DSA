#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
int v, e;
bool unused[1005];
int check = 0;
void DFS(int u, int y)
{
    unused[u] = 1;
    for (int i = 0; i < a[u].size(); i++)
    {
        if (unused[a[u][i]] == 0)
        {
            if (a[u][i] == y)
               check = 1;
            DFS(a[u][i],y);
        }
    }
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        cin >> v >> e;
        memset(unused, 0, sizeof(unused));
        a.clear();
        a.resize(v + 1);
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int num1, num2;
            cin >> num1 >> num2;
            check = 0;
            memset(unused, 0, sizeof(unused));
            DFS(num1,num2);
            if (check == 1)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}