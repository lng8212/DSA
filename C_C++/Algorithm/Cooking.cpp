#include<bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >>T;
    while (T--){
        long long n;
        int a,b;
        cin >>n>>a>>b;
        long long S=0;
        if (2*a<b){
            S=n*a;
        }
        else {
            S=(n/2)*b+(n%2)*a;
        }
        cout <<S<<"\n";
    }
    return 0;
}