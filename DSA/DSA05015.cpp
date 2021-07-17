#include<bits/stdc++.h>

using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        long long ans = 1;
        for(int i = n-k+1;i<=n;i++){
            ans*=i;
            ans%=(1000000007);
        }
        cout <<ans<<endl;
    }

    return 0;
}