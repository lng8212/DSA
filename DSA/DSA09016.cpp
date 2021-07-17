#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int> > a;
bool check;
int chuaxet[1005];
void init()
{
    a.clear();
    a.resize(1005);
    check = 0;
    memset(chuaxet, 0, sizeof(chuaxet));
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
}
void DFS(int u)
{

    chuaxet[u] = 1;
    for (int i = 0; i < a[u].size(); i++)
    {
        if (chuaxet[a[u][i]] == 1)
        {
            check = 1;
            break;
        }
        if (chuaxet[a[u][i]] == 0)
            DFS(a[u][i]);
    }
    chuaxet[u] = 2;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        for (int i = 1; i <= v; i++)
        {

            if (chuaxet[i] == 0)
                DFS(i);
            if (check == 1){
                cout <<"YES";
                break;
            }
            
        }
        if (check == 0)
            cout << "NO";
        cout << endl;
    }

    return 0;
}