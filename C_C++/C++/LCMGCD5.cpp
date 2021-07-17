#include<bits/stdc++.h>
using namespace std;
long long GCD (long long a, long long b){
    while (a*b!=0){
        if (a>b) a=a%b;
        else b=b%a;
    }
    return a+b;
}
void findGCD (long long a, long long x, long long y){
    long long k = GCD(x,y);
    for (int i=0;i<k;i++){
        cout <<a;
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        long long a,x,y;
        cin >>a>>x>>y;
        findGCD(a,x,y);
        cout <<endl;
    }

    return 0;
}