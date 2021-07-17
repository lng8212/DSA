#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n ){
    if (n<2) return 0;
    for (int i =2;i<=sqrt(n);i++){
        if (n%i==0) return 0; 
    }
    return 1;
}
bool check( int n){
    int z = n;
    int s= 0;
    while (z>0){
        if (isPrime(z%10)==0) return 0;
        s+=z%10;
        z/=10;
    }
    if (isPrime(n)==false || isPrime(s)==false) return false;
    return true;
}
int main (){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin >>a>>b;
        int s= 0;
        for (int i = a;i<=b;i++){
            if (check(i)==1) s++;
        }
        cout <<s<<endl;
    }
}