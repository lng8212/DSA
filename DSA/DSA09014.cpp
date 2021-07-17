#include<bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int> > a;
vector<int> ans;
bool chuaxet[10005];
void init()
{
    a.clear();
    ans.clear();
    a.resize(1005);
    memset(chuaxet,0,sizeof(chuaxet));
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
bool BFS(int u, int v){
    queue<int> kq;
    kq.push(u);
    chuaxet[u]=1;
    while (kq.size()>0){
        int k = kq.front();
        kq.pop();
        for (int i = 0;i<a[k].size();i++){
            if (chuaxet[a[k][i]]==0 && a[k][i]>0){
                chuaxet[a[k][i]]=1;
                if (a[k][i]==v) return 1;
                kq.push(a[k][i]);
            }
        }
    }
    return 0;

}
bool ktra(){
    for (int i =1;i<=v;i++){
        for (int j = 0;j<a[i].size();i++){
            int k = a[i][j];
            a[i][j]*=-1;
            if (BFS(i,k) == 1) return 1;
            a[i][j]*=-1;
        }
    }
    return 0;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        if (ktra()==1) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }

    return 0;
}