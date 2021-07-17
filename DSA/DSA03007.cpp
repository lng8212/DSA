#include<bits/stdc++.h>
using namespace std;

bool cmp (long long a, long long b){
    return a<b;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int  n;
        cin >>n;
        long long *a = new long long [n+1];
        long long *b = new long long [n+1];
        for (int i  =0;i<n;i++){
            cin >>a[i];
        }
        for (int i = 0;i<n;i++){
            cin >>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,cmp);
        long long s = 0;
        for (int i = 0;i<n;i++){
            s= s+ a[i]*b[n-i-1];
        }
        cout <<s<<endl;
    }

    return 0;
}