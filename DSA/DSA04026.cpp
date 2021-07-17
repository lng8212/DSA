#include<bits/stdc++.h>
using namespace std;

long long F[94];
void fibo (){
    F[1]=1;
    F[2]=1;
    for (int i = 3;i<93;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
char solve (long long n, long long  k){
    if (n==1) return '0';
    if (n==2) return '1';
    if (k<=F[n-2]) return solve(n-2,k);
    else return solve(n-1,k-F[n-2]);

}
int main (){
    fibo();
    int t;
    cin >>t;
    while (t--){
        long long n,k;
        cin >>n>>k;
        cout <<solve(n,k)<<endl;
    }


    return 0;
}