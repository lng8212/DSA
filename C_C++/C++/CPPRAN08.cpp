#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        float a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int lmax =0;
        int rmax =0;
        float ansmax = -9999;
        for (int i=0;i<=n-k;i++){
            float tmpmax=0;
            int x;
            for (int j=i;j<i+k;j++){
                tmpmax = tmpmax +a[j];
                x=j;
            }
            tmpmax = tmpmax/k;
            if (tmpmax > ansmax ) {
                ansmax = tmpmax;
                lmax=i;
                rmax=x;
            }
        }
        for (int i=lmax;i<=rmax;i++){
            cout <<a[i]<<' ';
        }
        cout <<endl;
    }


    return 0;
}