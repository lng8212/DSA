#include<bits/stdc++.h>
using namespace std;
bool isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int a[1000009];
void sang(){
    a[1]=1;
    for (int i=2;i<=1000007;i++){
    a[i]=2;
}
    for (int i=2;i<=1000007;i++){
        for (int j=2*i;j<=1000007;j+=i){
            a[j]++;
        }
    }
    for (int i=1;i<=1000007;i++){
        if (isPrime(a[i])==0) a[i]=0;
    }
}
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sang();
    int T;
    cin >>T;
    while (T--){
        int c,b;
        cin >>c>>b;
        if (c>b) swap (c,b);
        int S=0;
        for (int i=c;i<=b;i++){
            if (a[i]!=0 ) {
                S++;
            }
    }
      cout <<S<<"\n";
    }
    return 0;
}