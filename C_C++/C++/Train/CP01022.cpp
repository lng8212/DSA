#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int a,b,c;
        cin >>a>>b>>c;
        long long s = a+b+c;
        if (s%2==1) cout <<"First";
        else cout <<"Second";
        cout <<endl;
    }

    return 0;
}