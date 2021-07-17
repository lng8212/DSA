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
void BFS(int u){
   queue<int> kq;
   kq.push(u);
   unused[u]=1;
   while (kq.size()>0){
       int k = kq.front();
       kq.pop();
       for (int i = 0;i<a[k].size();i++){
           if (unused[a[k][i]]==0){
               kq.push(a[k][i]);
               cout <<a[k][i]<<" ";
               unused[a[k][i]]=1;
           }
       }
   }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        cout <<u<<" ";
        BFS(u);
        
        cout <<endl;
    }


    return 0;
}