#include<bits/stdc++.h>
using namespace std;
int a[101][25001];

int main (){

    memset(a,0,sizeof(a));
    int c;
    int n;
    cin >>c>>n;
    int M[n+1];
    for (int i = 1;i<=n;i++){
        cin >>M[i];
    }
    for (int i = 1;i<=n;i++){
        for (int j =1;j<=c;j++){
            a[i][j]=a[i-1][j];
            if (j-M[i]>=0) a[i][j]=max(a[i-1][j-M[i]]+M[i],a[i-1][j]);
        }
    }
    cout <<a[n][c];
    

    return 0;
}