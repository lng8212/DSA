#include<bits/stdc++.h>
using namespace std;

int a[100][100];
bool unused[100];
int n;

bool check[100][100];
void init(){
    cin >>n;
    for (int i =1;i<=n;i++){
        for (int j =1;j<=n;j++){
            cin >>a[i][j];
            check[i][j]=1;
        }
    }
}
void sett(){
    for (int i =1;i<=n;i++){
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
        for (int i = 1;i<=n;i++){
            if (a[k][i]==1 && unused[i]==true){
                unused[i]=false;
                kq.push(i);
            }
        }
    }
}
void kt (int i, int j){
    if (check[i][j]==1){
        check[i][j]=0;
        cout <<i<<" "<<j<<endl;
    }
}
void solve(){
    sett();
    for (int i = 1;i<=n;i++){
        for (int j = 0;j<=n;j++){
            if (a[i][j]==1){
                a[i][j]=0;
                BFS(1);
                for (int z = 1;z<=n;z++){
                    if (unused[z]==true) kt(i,j);
                }
                a[i][j]=1;
                
            }
            sett();
         }
    }
}
int main (){
    
    init();
    solve();
    
    
    return 0;
}