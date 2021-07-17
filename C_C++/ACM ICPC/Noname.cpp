#include<bits/stdc++.h>
using namespace std;
bool isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
bool check (int n){
    while (n>0){
        if (isPrime (n)==0) return 0;
        n=n/10;
    }
    return 1;
}
int main (){
    int l,r;
    cin >>l>>r;
     for (int i=l;i<=r;i++){
         if (check (i)==1) cout <<i<<' ';
     }

    return 0;
}