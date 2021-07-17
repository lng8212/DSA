#include<bits/stdc++.h>
using namespace std;
long long powz (long long n){
    long long ans = 1;
    long long z = 2;
    while (n>0){
        if (n%2!=0) ans = ans*z;
        n/=2;
        z=z*z;
    }
    return ans;

}

int main (){

    int t;
    cin >>t;
    while (t--){
        long long n,k;
        cin >>n>>k;
        long long mu = powz(n-1);
        long long mu2 = powz(n);
        if (k>mu) k = mu2-k;
        while (mu>0){
            if (k==1) {
                cout <<1;
                break;
            }
            else if (k==mu) {
                cout <<n;
                break;
            }
            else {
                mu/=2;
                n--;
            }
            if (k>mu) k = 2*mu-k;
        }
        cout <<endl;

    }


    return 0;
}