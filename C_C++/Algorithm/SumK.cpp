#include<bits/stdc++.h>
using namespace std;
int a[101][50001];
int mod =1e9+7;
void Solve(){
    for (int i=1;i<=9;i++) a[1][i]=1;
    for (int i=1;i<101;i++){
        for (int so=0;so<=9;so++){
            for (int j=so; j<=50000;j++){
                a[i][j]= (a[i][j]+a[i-1][j-so])%mod;
            }
        }
    }
}
int main(){
    Solve();
   // int T;
   // cin >>T;
 //   while (T--){
        int n,k;
        cin >>n>>k;
        cout <<a[n][k]<<endl;

   // }
    return 0;
}