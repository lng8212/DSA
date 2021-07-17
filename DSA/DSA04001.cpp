#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    long long m = 1000000007;
    while (t--){
        long long n,k;
        cin >>n>>k;
        long long ans = 1;
        while (k>0){
            if (k%2!=0) ans=(ans*n)%m;
            k/=2;
            n=(n*n)%m;
        }
        cout <<ans<<endl;
    }


    return 0;
}

