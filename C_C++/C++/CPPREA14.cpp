#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int k,n;
        cin >>k>>n;
        int a[k][n];
        int b[100007];
        int run=0;
        for (int i=0;i<k;i++){
            for (int j=0;j<n;j++){
                cin >>a[i][j];
                b[run++]=a[i][j];
            }
        }
        sort (b, b+run);
        for (int i=0;i<run;i++){
            cout <<b[i]<<' ';
        }
        cout <<endl;
       
    }

    return 0;
}