#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

int main (){
    int t;
    cin >>t;
    while (t--){
        long long n,r;
        cin >>n>>r;
        long long a[n+1];
        memset(a,0,sizeof(a));
        a[0]=1;
        for (long long i = 1;i<=n;i++){
            for (long long j  = min (i,r);j>0;j--){
                a[j]=(a[j]+a[j-1])%m;
            }
        }
        cout <<a[r]<<endl;

    }

    return 0;
}