#include <bits/stdc++.h>
using namespace std;

bool unused[100005];
int v, e;
vector<vector<int> > a;
struct Edge
{
    int sr;
    int di;
};
vector<Edge> ans;
void init()
{
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
    for (int i = 0; i <= v; i++)
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
            if (unused[a[k][i]] == true && a[k][i] > 0)
            {
                unused[a[k][i]] = false;
                kq.push(a[k][i]);
            }
        }
    }
}

void solve()
{
    sett();
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            int tmp = a[i][j];
            a[i][j] = -1;
            BFS(1);
            bool kt = 1;
            for (int z = 1; z <= v; z++)
            {
                if (unused[z] == true)
                    kt = 0;
            }
            a[i][j] = tmp;
            if (kt == 0)
            {
                Edge zz;
                if (i < a[i][j])
                {
                    zz.sr = i;
                    zz.di = a[i][j];
                }
                else {
                    zz.sr=a[i][j];
                    zz.di=i;
                }

                ans.push_back(zz);
            }

            sett();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        ans.clear();
        a.resize(1005);
        init();
        solve();
        sort(ans.begin(),ans.end(),cmp);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].sr << " ";
            cout << ans[i].di << " ";
        }
        cout << endl;
    }

    return 0;
}