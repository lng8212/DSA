#include<bits/stdc++.h>
using namespace std;
long long LCM (long long x,long long y, long long z){
    long long k =((x*y)/(__gcd(x,y)));
    return ((z*k)/(__gcd(z,k)));
}
long long findz(long long n,long long x,long long y,long long z){
    long long lcm=LCM(x,y,z);
    long long digit = pow (10,n-1);
    long long q= digit %lcm;
    if (q==0) return digit;
    digit = digit +lcm -q;
    if (digit <pow (10,n)) return digit;
    return -1;
}

int main (){
    int t;
    cin >>t;
    while (t--){
        long long x,y,z,n;
        cin >>x>>y>>z>>n;
        cout <<findz(n,x,y,z)<<endl;
    }

    return 0;
}