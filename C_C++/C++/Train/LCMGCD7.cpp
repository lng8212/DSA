#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        long long x,y,z,n;
        cin >>x>>y>>z>>n;
        long long t = (x/(__gcd(x,y)))*y;
        long long lcm = (t/(__gcd(t,z)))*z;
        long long k = pow(10,n-1);
        long long p = k%lcm;
        long long ans = k-p+lcm;
        if (k%lcm == 0) cout <<k;
        else if (ans <pow(10,n)) cout <<ans;
        else cout <<-1;
        cout <<endl;
        
    }


    return 0;
}