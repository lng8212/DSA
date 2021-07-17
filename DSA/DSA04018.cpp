#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        int k = upper_bound(a,a+n,0)-a;
        cout <<k<<endl;
    }


    return 0;
}