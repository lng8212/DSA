#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+1][m+1];
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=m;j++){
                cin >>a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        int maxz =0;
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                if (a[i][j]!=0){
                    dp[i][j]=min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1])+1;
                    maxz = max(maxz,dp[i][j]);
                }
            }
        }
        cout <<maxz<<endl;
        
    }
    return 0;
}