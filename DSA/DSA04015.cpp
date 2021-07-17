#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        long long n,x;
        cin >>n>>x;
        long long *a = new long long [n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        long long t = lower_bound(a,a+n,x)- a;
        if (t==0) {
            if (a[t] <=x) cout <<x;
            else cout <<"-1";
        }
        else {
            if (a[t]>x) cout <<t;
            else cout <<t+1;
        }
        cout <<endl;

    }


    return 0;
}