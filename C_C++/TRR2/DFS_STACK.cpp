#include<bits/stdc++.h>
using namespace std;

class Graph{
  int n,u;
  stack<int> res;
  bool unused[100];
  int a[100][100];
  public:
  void ktao();
  void DFS();
    
};
void Graph::ktao(){
    cin >>n>>u;
    for (int i = 0;i<100;i++){
        unused[i]=true;
    }
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
        }
    }
}
void Graph::DFS(){
    res.push(u);
    while (res.size()!=0){
        int k = res.top();
        if (unused[k]==true) cout <<k<<" ";
        unused[k]=false;
        res.pop();
        for (int i = 1;i<=n;i++){
            if (a[k][i]==1&& unused[i]==true){
                res.push(k);
                res.push(i);
                break;
            }
        }
    }
}

int main (){
    
    Graph a;
    a.ktao();
    a.DFS();
    
    return 0;
}