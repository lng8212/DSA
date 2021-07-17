#include<bits/stdc++.h>
using namespace std;
long long poz (long long x, long long n){
    int ans =1;
    while (n!=0){
        if (n%2!=0) ans = (ans*x)%1000000007;
        n/=2;
        x=(x*x)%1000000007;
    }
    return ans;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        long long n,x;
        cin >>n>>x;
        long long a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        long long kq=0;
        for (int i =0;i<n;i++){
            kq = (kq + a[i]*poz(x,n-i-1));
        }
        cout <<kq%1000000007<<endl;
    }



    return 0;
}