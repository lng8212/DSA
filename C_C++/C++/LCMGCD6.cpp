#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        long long n,m;
        cin >>n>>m;
        unsigned long long total = (n*(n+1))/2;
        unsigned long long s1 = (total +m)/2;
        unsigned long long s2 = total - s1;
        if (total<m) cout <<"No";
        else if (__gcd(s1,s2)==1 && s1-s2==m && s1+s2==total) cout <<"Yes";
        else cout <<"No";
        cout <<endl;
    }



    return 0;

}