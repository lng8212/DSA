#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+1][m+1];
        int f[n+1][m+1];
        for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                cin >>a[i][j];
            }
        }
        f[0][0]=a[0][0];
        for (int i =1 ;i<n;i++){
            f[i][0]=f[i-1][0]+a[i][0];
        }
        for (int j = 1;j<m;j++){
            f[0][j]=f[0][j-1]+a[0][j];
        }
        for (int i = 1;i<n;i++){
            for (int j =1;j<m;j++){
                f[i][j]=min(f[i-1][j],f[i][j-1]) + a[i][j];
            }
        }
        cout <<f[n-1][m-1]<<endl;

    }


    return 0;
}