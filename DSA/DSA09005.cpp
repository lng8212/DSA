#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
int v, e, u;
bool unused[1005];
void BFS(int u){
    queue<int > kq;
    kq.push(u);
    while (kq.size()>0){
        int k = kq.front();
        if (unused[k]==0) cout <<k<<" ";
        unused[k]=1;
        kq.pop();
        for (int i =0;i<a[k].size();i++){
            if (unused[a[k][i]]==0){
                kq.push(a[k][i]);
            }
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {   
        memset(unused,0,sizeof(unused));
        a.clear();
        cin >> v >> e >> u;
        a.resize(v+1);
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(u);
        cout <<endl;
    }

    return 0;
}