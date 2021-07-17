#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,q;
        cin >>n>>q;
        int a[n+1];
        for (int i=1;i<=n;i++){
            cin >>a[i];
        }
        while (q--){
            int z,b;
            cin >>z>>b;
            int S=0;
            for (int i=z;i<=b;i++){
                S = S + a[i];
            }
           cout <<S<<endl;
        }
         
    }

    return 0;
}