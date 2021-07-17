#include<bits/stdc++.h>
using namespace std;
bool cmp (int &a, int &b){
    return a>b;
}
int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int b[n+1];
        int c[n+1];
        for (int i=0;i<n;i++){
            b[i]=a[i];
            c[i]=a[i];
        }
        sort (b,b+n);
        sort(c, c+n,cmp);
        for (int i=0;i<n/2;i++){
            cout <<c[i]<<' '<<b[i]<<' ';
        }
        if (n%2==1) cout <<c[(n/2)];
        cout <<endl;

    }

    return 0;
}