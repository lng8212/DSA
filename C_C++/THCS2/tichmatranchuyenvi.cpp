#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int > tmp;
    int n,m;
    cin >>n>>m;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >>a[i][j];
        }
    }
    int z=0;
    for (int j=1;j<=m;j++){
        for (int i=1;i<=n;i++){
            b[j][i]=a[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            for (int k=1;k<=m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout <<c[i][j]<<' ';
        }
        cout <<endl;
    }
    return 0;
}