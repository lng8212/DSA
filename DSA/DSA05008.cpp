#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,s;
        cin >>n>>s;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int dp[100002]={0};
        dp[0]=1;
        dp[s]=0;
        for (int i = 0;i<n;i++){
            for(int j =s;j>=a[i];j--){
                if (dp[j]==0 && dp[j-a[i]]==1) dp[j]=1;
            }
        }
        if (dp[s]==1) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }
}