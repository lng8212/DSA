#include<iostream>
using namespace std;

class Graph{
  int a[100][100];
  int n;
  bool check[100];
  public:
  void ktao();
  void DFS(int k);
};
void Graph::ktao(){
    for (int i = 0;i<100;i++){
        check[i]=false;
    }
    cin >>n;
    for (int i = 1;i<=n;i++){
        for (int j =1;j<=n;j++){
            cin >>a[i][j];
        }
    }
}
void Graph::DFS(int k ){
    cout <<k<<" ";
    check[k]=true;
    for (int i = 1;i<=n;i++){
        if (a[k][i]==1 && check[i]==false){
            DFS(i);
        }
    }
}
int main (){
    Graph a;
    a.ktao();
    a.DFS(1);
    
    
    
    return 0;
}