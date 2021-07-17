#include<bits/stdc++.h>
using namespace std;

int nCr (int n, int r){
    if (r>n-r) r=n-r;
    int C[r+1];
    memset(C,0,sizeof(C));
    C[0]=1;
    for (int i = 1; i <= n; i++) { 
   
        for (int j = min(i, r); j > 0; j--) 
   
            C[j] = (C[j] + C[j - 1]) % 1000000007; 
    } 
    return C[r]; 
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int k = n+m;
        long long ans = nCr(k,n) + nCr(k,m);
        cout <<ans/2<<endl;
    }

    return 0;
}