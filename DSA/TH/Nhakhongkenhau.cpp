#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int *a = new int [n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int in = a[0];
        int ex = 0;
        int ex_new;
        for (int i=1;i<n;i++) {
            ex_new = max(in,ex);
            in = ex +a[i];
            ex= ex_new;
        }
        cout <<max(in,ex)<<endl;
    }


    return 0;
}