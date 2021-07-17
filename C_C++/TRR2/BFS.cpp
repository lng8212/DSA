#include<bits/stdc++.h>
using namespace std;
int n,u;
int a[100][100];
bool unused[100];

void BFS(int u ){
    queue<int> kq;
    kq.push(u);
    while (kq.size()>0){
        int k = kq.front();
        if (unused[k]==0) cout <<k<<" ";
        unused[k]=1; 
        kq.pop();
        for (int i = 1;i<=n;i++ ){
            if (a[k][i]==1 && unused[i]==0){
             kq.push(i);
            }
        }
    }
}
int main (){
    cin >>n;
    cin >>u;
    memset(unused,0,sizeof(unused));
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
        }
    }
    BFS(u);
    
    return 0;
}