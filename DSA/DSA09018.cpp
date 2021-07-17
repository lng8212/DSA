#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int> > a;
bool unused[1006];
void init()
{
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
    for (int i = 0; i < 1004; i++)
    {
        unused[i] = true;
    }
}
void BFS(int u)
{
    queue<int> kq;
    kq.push(u);
    unused[u]=false;
    while (kq.size()>0){
        int k = kq.front();
        kq.pop();
        for (int i =0;i<a[k].size();i++){
            if (unused[a[k][i]]==true){
                unused[a[k][i]]=false;
                kq.push(a[k][i]);
            }
        }
    }
}
int TPLT(){
    int s = 0;
    for (int i =1;i<=v;i++){
        if (unused[i]==true){
            s++;
            BFS(i);
        }
    }
    return s;
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
        for (int i =1;i<=v;i++){
            unused[i]=false;
            
            if (TPLT()!=tplt) cout <<i<<" ";
            sett();
        }
        cout <<endl;
    }

    return 0;
}