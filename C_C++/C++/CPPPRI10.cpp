#include<bits/stdc++.h>
using namespace std;
int sumOfNum (int n){
    int s=0;
    while (n>0){
        s=s+n%10;
        n=n/10;
    }
    return s;
}
bool isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
bool ans (int n){
    int z=n;
    int s=0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            while (n%i==0){
                s=s+sumOfNum(i);
                n=n/i;
            }
        }
    }
    if (n>1) s=s+sumOfNum(n);
    if (s==sumOfNum(z) && isPrime(z)==0) return 1;
    return 0;
}
int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        if (ans(n)==1) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }

    return 0;
}