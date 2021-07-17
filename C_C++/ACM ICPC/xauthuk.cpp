#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        long long n,k;
        cin >>n>>k;
        long long x1;
        long long x2;
        long long vt=(-1+sqrt(1+8*(k-1)))/2;
        long long pos =vt+1; 
        k=k-(vt*(vt+1)/2);
        x1=pos+1;
        x2=k;
        x1=n-x1;
        x2=n-x2;
        for (int i=0;i<x1;i++){
            cout <<'a';
        }
        cout <<'b';
        for (int i=x1+1;i<x2;i++){
            cout <<'a';
        }
        cout <<'b';
        for (int i=x2+1;i<n;i++){
            cout <<'a';
        }
        cout <<endl;

    }
}