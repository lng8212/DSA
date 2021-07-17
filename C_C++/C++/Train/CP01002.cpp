#include<bits/stdc++.h>
using namespace std;

long long gt (long long n){
    if (n<2) return 1;
    return n*gt(n-1);
}
int main (){
    int n;
    cin >>n;
    long long s= 0;
    for (int i =1;i<=n;i++){
        s+=gt(i);
    }
    cout <<s;


    return 0;
}