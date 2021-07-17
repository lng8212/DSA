#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        sort(a,a+n);
        long long dp[k+1]={0};
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        dp[0]=1;
        for (int i = 1;i<=k;i++){
            for (int j = 0;j<n;j++){
                if (i>=a[j]) dp[i]=(dp[i]+dp[i-a[j]])%1000000007;
            }
        }
        cout <<dp[k]<<endl;

    }


    return 0;
}