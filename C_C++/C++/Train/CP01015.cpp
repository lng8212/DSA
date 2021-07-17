#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        long long s =0 ;
        for (int i = 0;i<a.size();i++){
            s=s*10+(a[i]-'0');
            s%=4;
        }
        if(s==0) cout <<"4";
        else cout <<"0";
        cout <<endl;

    }

    return 0;
}