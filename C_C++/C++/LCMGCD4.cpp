#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        long long s;
        cin >>s;
        string a;
        cin >>a;
        long long k=0;
        for (int i=0;i<a.size();i++){
            k=((k*10)+(a[i]-'0'))%s;
        }
        cout <<__gcd(k,s)<<endl;
    }


    return 0;
}