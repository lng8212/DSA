#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int n,k;
        cin >>n>>k;
        int a[10000];
        for (int i=1;i<=k;i++){
            cin >>a[i];
        }
        int check =0;
        int i=k;
        while (i>=0 &&  a[i]==n-k+i) i--;
        if (i>0) {
            a[i]++;
            for (int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
        }
        else check =1;
        if (check == 1 ) {
            for (int i=1;i<=k;i++){
                cout <<i<<' ';
            }
        }
        else {
            for (int i=1;i<=k;i++){
                cout <<a[i]<<' ';
            }
        }
        cout <<endl;
    }

    return 0;
}