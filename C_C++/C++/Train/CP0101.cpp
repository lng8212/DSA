#include<bits/stdc++.h>
using namespace std;


int main (){

    int n,k;
    cin >>n>>k;
    long long s = 1;
    long long sum = 0;
    for (int i = 1;i<=n;i++){
        s=s*i;
        while(s%2==0) {
            sum++;
            s/=2;
        }
    }
    if (sum>=k) cout <<"Yes";
    else cout <<"No";

    return 0;
}