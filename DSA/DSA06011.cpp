#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int ans = 1e7;
        int zz = 1e7;
        for (int i =0;i<n-1;i++){
            for (int j =i+1;j<n;j++){
                int k = abs(a[i]+a[j]);
                if (k<ans){
                    ans = k;
                    zz = a[i]+a[j];
                }
            }
        }
        cout <<zz<<endl;
    }


    return 0;
}