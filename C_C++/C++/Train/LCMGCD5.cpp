#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >>t;
    while (t--){
        long long a,x,y;
        cin >>a>>x>>y;
        long long k = __gcd(x,y);
        for (int i = 0;i<k;i++){
            cout <<a;
        }
        cout <<endl;
    }
}