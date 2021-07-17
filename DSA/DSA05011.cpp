#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int m = 1e9+7;
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        for (int i = 0;i<=n;i++){
            dp[i][0]=0;
        }
        for (int j = 0;j<=k;j++){
            dp[0][j]=0;
        }
        for (int i = 1;i<=9;i++){
            dp[1][i]=1;
        }
        for (int i = 2;i<=n;i++){
            for (int j = 0;j<=9;j++){
                for (int q =j;q <= k;q++){
                    dp[i][q]= (dp[i][q]%m +dp[i-1][q-j]%m)%m;
                }
            }
        }
        cout <<dp[n][k]<<endl;
    }


    return 0;
}