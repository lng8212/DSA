#include<bits/stdc++.h>
using namespace std;
int m = 1e9+7;
long long xuli(long long a, long long b){
    if (b == 0) return 1;
    if ( b % 2 == 0){
        long long tg = xuli(a,b/2);
        return (tg*tg)%m;
    }
    else{
        long long tg = xuli(a,b-1);
        return (tg*a)%m;
    }
}
int main (){
    int t;
    cin>>t;
    while (t--){
        long long n;
        cin >>n;
        long long k =n;
        long long s= 0;
        while (n>0){
            s=s*10+n%10;
            n/=10;
        }
        cout <<xuli(k,s)<<endl;
        
    }

    return 0;
}