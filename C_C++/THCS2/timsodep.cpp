#include<bits/stdc++.h>
using namespace std;
bool isPrime (int n){
    if(n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
bool thuannghich(int n){
    int k=n;
    int S=0;
    while (k>0){
        S=S*10+k%10;
        k=k/10;
    }
    if (S==n) return 1;
    return 0;
}
bool uocso(int n){
    int S=0;
    for (int i=2;i<sqrt(n);i++){
        if (n%i==0 && isPrime(i)==1) S++;
        if (n%(n/i)==0 && isPrime(n/i)==1) S++;
    }
    if ((int)sqrt(n)*(int)sqrt(n)==n && isPrime (sqrt(n))==1) S++;
    if (S>=3)  return 1;
    return 0;

}
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    for (int i=a;i<=b;i++){
        if (uocso(i)==1 && thuannghich(i)==1) cout <<i<<' ';
    }
    return 0;
}