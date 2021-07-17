#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        int dp[n+1][k];
        dp[0][0]=0;
        for (int i  =1;i<k;i++){
            dp[0][i]=-99999;
        }
        for (int i = 1;i<=n;i++){
            a[i]=a[i]%k;
            for (int j =0;j<k;j++){
                 dp[i][j]= max(dp[i-1][j], dp[i-1][(j-a[i]+k)%k]+1);
            }
        }
        cout <<dp[n][0]<<endl;
    }


    return 0;
}