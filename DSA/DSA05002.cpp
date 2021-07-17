#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        string a;
        cin >>a;
        int kq[n+2][n+2];
        memset(kq,0,sizeof(kq));
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                if (a[i-1]==a[j-1] && i!=j){
                    kq[i][j]=kq[i-1][j-1]+1;
                }
                else {
                    kq[i][j]=max(kq[i][j-1],kq[i-1][j]);
                }
            }
        }
        cout <<kq[n][n]<<endl;
    }


    return 0;
}