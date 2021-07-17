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
        int maxcl = 0;
        int fr = a[0];
        int maxx;
        for (int i =1;i<n;i++){
            maxx = max(fr,maxcl);
            fr = maxcl +a[i];
            maxcl = maxx;
        }
        cout <<max(fr,maxcl)<<endl;
    }


    return 0;
}