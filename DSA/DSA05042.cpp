#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        long long n,k;
        cin >>n>>k;
        long long a[n+1];
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        long long dp[n+1];
        for (int i = 1;i<=n;i++){
            dp[i]=a[i];
        }
        for (int i = 1;i<=n;i++){
            
        }
        bool check = false;
        for (int i = 1;i<=n;i++){
            if (dp[i]==k){
                check = true;
                break;
            }
        }
        if (check == true) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }
}