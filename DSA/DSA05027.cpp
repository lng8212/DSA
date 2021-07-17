#include<bits/stdc++.h>
using namespace std;

int v,n;
int kq[1001][1001];
int a[1005];
int c[1005];
void init(){
    memset(kq,0,sizeof(kq));
    cin >>n>>v;
    for (int i = 1;i<=n;i++){
        cin >>a[i];
    }
    for (int i =1;i<=n;i++){
        cin >>c[i];
    }
}
void solve(){
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=v;j++){
            kq[i][j]=kq[i-1][j];
            if ((j>=a[i]) && (kq[i-1][j-a[i]]+c[i]>kq[i-1][j])) kq[i][j]=kq[i-1][j-a[i]]+c[i];
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        solve();
        cout <<kq[n][v]<<endl;
    }



    return 0;
}