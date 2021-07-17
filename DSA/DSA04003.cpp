#include<bits/stdc++.h>
using namespace std;
int modz = 123456789;
long long powz (long long n){
    if (n==0) return 1;
    if (n==1) return 2;
    if (n%2==0) {
        long long x = powz(n/2);
        return (x*x)%modz;
    }
    if (n%2!=0){
        long long x = powz(n-1);
        return (x*2)%modz;
    }
}

int main (){


    int t;
    cin >>t;
    while (t--){
        long long n;
        cin >>n;
        cout <<powz(n-1)<<endl;
    }
}