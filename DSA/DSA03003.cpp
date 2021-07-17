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
        sort(a,a+n);
        long long s=0, m = 1000000007;
        for (int i = 0;i<n;i++){
            long long k = a[i]*i;
            s=(s+k)%m;
        }
        cout <<s<<endl;
    }


    return 0;
}