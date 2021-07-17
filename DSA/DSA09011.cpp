#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[502][502];
bool unused[502][502];
int X[]={-1,-1,-1,0,0,1,1,1};
int Y[]={-1,0,1,-1,1,-1,0,1};
void init (){
    cin >>n>>m;
    for (int i = 0;i<501;i++){
        for (int j = 0;j<501;j++){
            unused[i][j]=true;
        }
    }
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=m;j++){
            cin >>a[i][j];
        }
    }
}
void DFS(int i, int j){
    unused[i][j]=false;
    for (int z =0;z<8;z++){
        int x = i+ X[z];
        int y = j+ Y[z];
        if ( x>0 && y>0 && x<=n && y<=m && unused[x][y]==true && a[x][y]==1){
            DFS(x,y);
        }
    }
}


int main(){

    int t;
    cin >>t;
    while (t--){
        init();
        int s=0;
        for (int i = 1;i<=n;i++){
            for (int j =1;j<=m;j++){
                if (unused[i][j]==true && a[i][j]==1){
                    s++;
                    DFS(i,j);
                }
            }
        }
        cout <<s<<endl;
    }


    return 0;
}