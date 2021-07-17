#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        long long b,m;
        cin >>b>>m;
        long long s=0;
        long long res=1;
        for (int i=0;i<a.size();i++){
            s=(s*10+(a[i]-'0'))%m;
        }
        while (b>0){
            if (b%2!=0) res=(res*s)%m;
            b=b/2;
            s=(s*s)%m;

        }
        cout <<res<<endl;
    }


    return 0;
}