#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int m = 1000000007;
        if (k>n-k) k = n-k;
        int C[k+1]={0};
        C[0]=1;
        for (int i =1;i<=n;i++){
            for (int j = min (i,k);j>0;j--){
                C[j]=(C[j]+C[j-1])%m;
            }
        }
        cout <<C[k]<<endl;
    }


    return 0;
}