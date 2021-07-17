#include<bits/stdc++.h>
using namespace std;
long long F[94];
char sFibo(int n, long long k) {
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (k<=F[n-2]) return sFibo (n-2,k);
    return sFibo(n-1,k-F[n-2]);
}
int main (){
    F[1]=1;
    F[2]=1;
    for (int i=3;i<93;i++){
        F[i]=F[i-2]+F[i-1];
    }
    int t;
    cin >>t;
    while (t--){
        int n;
        long long k;
        cin >>n>>k;
        cout <<sFibo(n,k)<<endl;
    }
    return 0;
}