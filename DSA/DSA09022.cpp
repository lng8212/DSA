#include<bits/stdc++.h>
using namespace std;
int v,e,u;
vector<vector<int> >a;
bool unused[1005];
void init (){   
    a.resize(1005);
    a.clear();
    memset(unused,0,sizeof(unused));
    cin >> v>>e>>u;
    for (int i = 0;i<e;i++){
        int x, y;
        cin >>x>>y;
        a[x].push_back(y);
    }
}
void DFS(int u){
    unused[u]=1;
    for (int i = 0;i<a[u].size();i++){
        if (unused[a[u][i]]==0){
            unused[a[u][i]]=1;
            cout <<a[u][i]<<" ";
            DFS(a[u][i]);
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        cout <<u<<" ";
        DFS(u);
        
        cout <<endl;
    }


    return 0;
}