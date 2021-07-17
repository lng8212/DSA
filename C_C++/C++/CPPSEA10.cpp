#include<bits/stdc++.h>
using namespace std;
bool isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        bool check =0;
        for (int i=2;i<=n;i++){
            if (isPrime (i)==1 && isPrime (n-i)==1){
                cout <<i<<" "<<n-i;
                check = 1;
                break;
            }
        }
        if (check ==0) cout <<"-1";
        cout <<endl;
    }
}