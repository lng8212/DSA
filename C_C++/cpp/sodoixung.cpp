#include<iostream>
#include<math.h>
using namespace std;
long long c(long long x){
    long long y=0;
    long long t=x;
    while (t!=0){
        y=y*10+t%10;
        t=t/10;
    }
    if (x==y) return 1;
    else return 0;
}
int main (){
    long long T;
    cin >> T;
    for (long long i=0;i<T;i++){
        long long n;
        scanf("%lld", &n);
        if (c(n)==0) cout<<"NO\n"<< endl;
        else cout << "YES\n"<<endl;
    }
}