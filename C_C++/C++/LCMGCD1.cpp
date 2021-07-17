#include<bits/stdc++.h>
using namespace std;
long long UCLN (long long a, long long b){
    while (a*b!=0) {
        if (a>b) a = a%b;
        else b=b%a;
    }
    return a+b;
}
long long BCNN (long long a, long long b){
    return (a/UCLN(a,b))*b;
}
int main (){
    int T;
    cin >>T;
    while (T--){
        long long a,b;
        cin >>a>>b;
        cout <<BCNN(a,b)<<' '<<UCLN(a,b)<<endl;
    }
    return 0;
}