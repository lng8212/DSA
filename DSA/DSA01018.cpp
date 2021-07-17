#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[k+1];
        for (int i =1;i<=k;i++){
            cin >>a[i];
        }
        a[0]=0;
        int i = k;
        while (a[i]==a[i-1]+1) i--;
        if (i==0){
            for (int i =1;i<=k;i++){
                cout <<n-k+i<<" ";
            }
        }
        else {
            a[i]--;
            for (int j = i+1;j<=k;j++){
                a[j]=n-k+j;
            }
            for (int j=1;j<=k;j++){
                cout <<a[j]<<" ";
            }
        }
        cout <<endl;
    }

    return 0;
}