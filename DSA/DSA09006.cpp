#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
int v, e, s, t;
bool unused[1005];
int pre[1005];
void DFS(int u){
    unused[u]=1;
    for (int i = 0;i<a[u].size();i++){
        if (unused[a[u][i]]==0) {
            pre[a[u][i]]=u;
            DFS(a[u][i]);
        }
    }
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {   
        cin >> v >> e >> s >> t;
        memset(unused,0,sizeof(unused));
        memset(pre,0,sizeof(pre));
        a.clear();
        a.resize(v+1);
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        DFS(s);
        if (pre[t]==0) cout <<"-1";
        else {
            vector<int> z;
            int  q = t;
            while (pre[q]!=0){
                z.push_back(pre[q]);
                q = pre[q];
            }
            for (int j = z.size()-1;j>=0;j--){
                cout <<z[j]<<" ";
            }
            cout <<t;
        }
        cout <<endl;
    }

    return 0;
}