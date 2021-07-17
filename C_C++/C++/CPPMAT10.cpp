#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+1][m+1];
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin >>a[i][j];
            }
        }
        int b[n+1][m+1];
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                b[i][j]=a[i][j];
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (a[i][j]==1){
                    for (int k=0;k<n;k++){
                        b[k][j]=1;
                    }
                    for (int z=0;z<m;z++){
                        b[i][z]=1;
                    }
                }
            }
        }
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    cout <<b[i][j]<<' ';
                }
                cout <<endl;
            }
        }


    return 0;
}