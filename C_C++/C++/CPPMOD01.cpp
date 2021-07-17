#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main (){
    fastIO();
    int t;
    cin >>t;
    while (t--){
        long long x,y,p;
        cin >>x>>y>>p;
        long long ans  = 1 ;
        while (y>0){
            if (y%2!=0) ans = (ans*x)%p;
            y/=2;
            x=(x*x)%p;
        }
        cout <<ans<< endl;
    }

    return 0;
}