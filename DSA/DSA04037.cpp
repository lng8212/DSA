#include<bits/stdc++.h>
using namespace std;
long long F[93];
void fibo (){
    F[1]=1;
    F[2]=1;
    for (int i =3;i<93;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
char Solve (long long i,int n ){
    if (n==1) return '0';
    if (n==2) return '1';
    if (i<=F[n-2]) return Solve(i,n-2);
    return Solve(i-F[n-2],n-1);


}

int main (){
    int t;
    cin >>t;
    fibo();
    while (t--){
        int n;
        long long i;
        cin >>n>>i;
        cout <<Solve(i,n);
        cout <<endl;
    }
    



    return 0;
}