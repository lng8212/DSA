#include<bits/stdc++.h>
using namespace std;
long long muz (int n){
    if (n==1) return 2;
    if (n==0) return 1;
    long long p = muz(n/2);
    if (n%2!=0) return p *p*2;
    return p*p;
    
}
int main (){
    int t;
    cin >>t;
    while (t--){
        long long n, k;
        cin >>n>>k;
        long long mid = muz(n)/2;
        while (1){
            if (n==1) {
                cout <<1<<endl;
                break;
            }
            if (k==mid) {
                cout <<n<<endl;
                break;
            }
            if (k>mid) {
                k=2*mid - k;
            }
            n--;
            mid =mid /2;
        }
    }
    return 0;
}