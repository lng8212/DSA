#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
bool check (int n){
    for (int i=1;i<=n;i++){
        if (isPrime(i)==1 && n%i==0){
            int point = i*i;
            if (n%point !=0) return 0; 
        }
    }
    return 1;
}
int main (){
    int a,b;
    cin >>a>>b;
    if (a>b) swap (a,b);
    for (int i=a+1;i<b;i++){
        if (check (i)==1) cout <<i<<' ';
    }
    return 0;
}