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
        for (int i = 0;i<=n;i++){
            dp[i][0]=1e9+7;
        }
        for (int i = 0;i<=m;i++){
            dp[0][i]=1e9+7;
        }
        for (int i =1;i<=n;i++){
            for (int j =1;j<=m;j++){
                cin >>a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=m;j++){
                if(i==1 && j==1) continue;
                dp[i][j]= min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1])+dp[i][j];
            }
        }
        cout <<dp[n][m]<<endl;

    }


    return 0;
}