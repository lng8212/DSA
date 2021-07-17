#include <bits/stdc++.h>
using namespace std;
int a[102][102];
bool ok[102][102];
int n,m;
int X[]={-1,0,1,-1,1,-1,0,1};
int Y[]={-1,-1,-1,0,0,1,1,1};
void DFS (int i, int j){
    ok[i][j]=1;
    for (int z =0;z<8;z++){
       int x =i +X[z];
        int y=j+ Y[z];
        if (x>=1 && y>=1 && x<=n && y<=m && a[x][y]==1 && ok[x][y]==0){
            DFS(x,y);
        }
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        memset(ok,0,sizeof(ok));
        cin >>n>>m;
        for (int i =1;i<=n;i++){
            for (int j = 1;j<=m;j++){
                cin >>a[i][j];
            }
        }
        int s =0;
        for (int i =1;i<=n;i++){
            for (int j =1;j<=m;j++){
                if (a[i][j]==1 && ok[i][j]==0) {
                    s++;
                    DFS(i,j);
                }
            }
        }
        cout <<s<<endl;

    }
    return 0;
} 