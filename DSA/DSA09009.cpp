#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
int v, e;
bool unused[1005];
int kq;
void BFS(int u){
    queue<int> kq;
    kq.push(u);
    unused[u]=1;
    while (kq.size()>0){
        int k = kq.front();
        kq.pop();
        for (int i = 0;i<a[k].size();i++){
            if (unused[a[k][i]]==0){
                unused[a[k][i]]=1;
                kq.push(a[k][i]);
            }
        }
    }
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {   
        kq = 0;
        cin >> v >> e;
        memset(unused,0,sizeof(unused));
        a.clear();
        a.resize(1005);
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1;i<=v;i++){
            if (unused[i]==0){
                BFS(i);
                kq++;
            }
        }
        cout <<kq<<endl;

    }

    return 0;
}