
#include<bits/stdc++.h>
using namespace std;

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
        sort( a,a+n);
        int x=0,y=n-1;
        while (x<y){
            cout <<a[y]<<' '<<a[x]<<' ';
            y--;x++;
        }
        if (n%2!=0) cout <<a[x];
        cout <<endl;
    }

    return 0;
}