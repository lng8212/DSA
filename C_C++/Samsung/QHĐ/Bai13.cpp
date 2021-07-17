#include<bits/stdc++.h>
using namespace std;
 int C,N;
 int w[1000];
 int kq[101][25001];
 void solve (){
     for (int i=1;i<=N;i++){
         for (int j=1;j<=C;j++){
             if (w[i]>j) kq[i][j]=kq[i-1][j];
             else {
                 kq[i][j]=max (kq[i-1][j],kq[i-1][j-w[i]]+ w[i]);
             }
         }
     }
 }
int main (){
    cin >>C>>N;
    for (int i=1;i<=N;i++){
        cin >> w[i];
    }
    memset(kq,0,sizeof(kq));
    solve();
    cout <<kq[N][C];
    return 0;
}