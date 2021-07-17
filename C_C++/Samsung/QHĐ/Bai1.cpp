
#include<bits/stdc++.h>
using namespace std;

int kq[1001][1001];
int main (){
    int T;
    cin >>T;
    while (T--){
        int n;
        cin >>n;
        int a[n+1];
        int b[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        for (int i=0;i<n;i++){
            cin >>b[i];
        }
        memset(kq,0,sizeof(kq));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (a[i-1]==b[j-1]) kq[i][j]= kq[i-1][j-1]+1;
                else kq[i][j] = max (kq[i-1][j], kq[i][j-1]);
            }
        }
        cout <<kq[n][n]<<endl;
    }
    return 0;
}