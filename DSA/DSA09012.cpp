#include<bits/stdc++.h>
using namespace std;

bool unused[100005];
int v,e;
vector<vector<int> > a;
void init(){
    cin >>v>>e;
    for (int i =1;i<=e;i++){
        int x,y;
        cin >>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    
}
void sett(){
    for (int i =1;i<=v;i++){
        unused[i]=true;
    }
}
void BFS(int u){
    queue<int> kq;
    kq.push(u);
    unused[u]=false;
    while (kq.size()>0){
        int k = kq.front();
        kq.pop();
        for (int i = 0;i<a[k].size();i++){
            if (unused[a[k][i]]==true && a[k][i]>0){
                unused[a[k][i]]=false;
                kq.push(a[k][i]);
            }
        }
    }
}

void solve(){
    sett();
    for (int i = 1;i<=v;i++){
        unused[i]=false;
        if(i>1) BFS(1);
        else BFS(2);
        bool kt = 0;
        for (int j = 1;j<=v;j++){
            if(i!=j && unused[j]==true) kt = 1;
        }
        if (kt==1) cout <<i<<" ";
        sett();
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        a.clear();
        a.resize(1005);
        init();
        solve();
        cout <<endl;
    }
    
    
    
    
    return 0;
}