#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int> > a;
bool unused[1006];
struct Edge
{
    int fr;
    int ls;
};
vector<Edge> ans;
bool cmp(Edge a, Edge b)
{
    if (a.fr < b.fr)
        return 1;
    else if (a.fr > b.fr)
        return 0;
    else
    {
        if (a.ls < b.ls)
            return 1;
        return 0;
    }
}
void init()
{
    ans.clear();
    a.clear();
    a.resize(1005);
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void sett()
{
    for (int i = 0; i < 1002; i++)
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
        int k = kq.front();
        kq.pop();
        for (int i = 0; i < a[k].size(); i++)
        {
            if (unused[a[k][i]] == true && a[k][i]>0)
            {
                unused[a[k][i]] = false;
                kq.push(a[k][i]);
            }
        }
    }
}
int TPLT()
{
    int s = 0;
    for (int i = 1; i <= v; i++)
    {
        if (unused[i] == true)
        {
            s++;
            BFS(i);
        }
    }
    return s;
}
void delEdge(int u, int v)
{
    for (int i = 0; i < a[u].size(); i++)
    {
        if (a[u][i] == v)
            a[u][i]=0;
    }
    for (int i = 0; i < a[v].size(); i++)
    {
        if (a[v][i] == u)
        {
            a[v][i]=0;
        }
    }
}
void addEdge(int u, int v){
    for (int i = 0; i < a[u].size(); i++)
    {
        if (a[u][i] == 0)
            a[u][i]=v;
    }
    for (int i = 0; i < a[v].size(); i++)
    {
        if (a[v][i] == 0)
        {
            a[v][i]=u;
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        sett();
        int tplt = TPLT();
        sett();
        for (int i = 1; i <= v; i++)
        {
            for (int j =0; j < a[i].size(); j++)
            {
                int frx = i;
                int lsx = a[i][j];
                delEdge(frx, lsx);
                if (TPLT() > tplt)
                {
                    Edge x;
                    if (frx < lsx)
                    {
                        x.fr = frx;
                        x.ls = lsx;
                    }
                    else {
                        x.fr=lsx;
                        x.ls = frx;
                    }

                    ans.push_back(x);
                }
                addEdge(frx,lsx);
                sett();
            }
        }
        sort(ans.begin(), ans.end(), cmp);
        for (int i = 0; i < ans.size(); i+=2)
        {
            cout << ans[i].fr << " " << ans[i].ls << " ";
        }
        cout << endl;
    }

    return 0;
}