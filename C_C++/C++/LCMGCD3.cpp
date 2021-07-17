#include<bits/stdc++.h>
using namespace std;

long long uclnt (long long a, long long b, long long modz){
    while (a*b!=0){
        if (a>b)  a%=b;
        else b%=a;
    }
    return ((a + b)%modz);
}
int main (){
    int t;
    cin >>t;
    long long hs = 1000000007;
    while (t--){
        long long n;
        cin >>n;
        long long a[n+1];
        for (long long i=0;i<n;i++){
            cin >>a[i];
        }
        long long k=1;
        for (long long i=0;i<n;i++){
            k=(k*a[i])%hs;
        }
        //8 //2 //2
        //8*8=64
        long long ucln=a[0];
        for (long long  i=1;i<n;i++){
            ucln = uclnt(ucln,a[i],hs);
        }
        long long ans=1;
        while (ucln !=0){
            if (ucln%2!=0) ans = (ans*k)%hs;
            ucln/=2;
            k=(k*k)%hs;
        }
        cout <<ans<<endl;
    }


    return 0;
}