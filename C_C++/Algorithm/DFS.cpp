#include <bits/stdc++.h>
using namespace std;
vector<int> ke[10000];
bool chuaxet[10000];

void DFS(int n)
{
    chuaxet[n] = true;
    cout << n << ' ';
    for (int i = 0; i < ke[n].size(); i++)
    {
        if (chuaxet[ke[n][i]] == false)
        {
            chuaxet[ke[n][i]] = true;
            DFS(ke[n][i]);
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1 && i < j)
            {
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < ke[i].size(); j++)
        {
            cout << ke[i][j] << ' ';
        }
        cout << endl;
    }
    DFS_Stack(1);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (chuaxet[i] == false)
    //     {
    //         chuaxet[i] = true;
    //         S++;
    //         DFS(i);
    //         cout << endl;
    //     }
    // }
    // cout << S;
    return 0;
}