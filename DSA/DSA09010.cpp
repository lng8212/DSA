#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int> > a;
bool unused[1005];
void init()
{
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >>x>>y;
        a[x].push_back(y);
        // a[y].push_back(x);
    }
}
void sett()
{
    for (int i = 1; i <=v; i++)
    {
        unused[i] = true;
    }
}
bool BFS(int u)
{
    queue<int> kq;
    kq.push(u);
    unused[u]=false;
    while (kq.size() > 0)
    {
        int tmp = kq.front();
        kq.pop();
        for (int i = 0; i < a[tmp].size(); i++)
        {
            if (unused[a[tmp][i]] == true)
            {
                unused[a[tmp][i]] = false;
                // cout <<tmp<<" "<<a[tmp][i]<<endl;
                kq.push(a[tmp][i]);
            }
        }
    }
    for (int i = 1; i <= v; i++)
    {
        if (unused[i] == true)
            return 0;
    }
    return 1;
}
bool Strong_Connected()
{
    sett();
    for (int i = 1; i <= v; i++)
    {
        // cout <<BFS(i)<<" ";
        if (BFS(i) == 0)
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

    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        a.resize(1005);
        init();
        if (Strong_Connected() == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}