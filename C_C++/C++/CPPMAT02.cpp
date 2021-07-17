#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1][n+1];
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin >>a[i][j];
            }
        }
         int b[100005];
         memset(b,0,sizeof(b));
         for (int i=0;i<n;i++){
             int c[100005];
             memset(c,0,sizeof(c));
             for (int j=0;j<n;j++){
                c[(a[i][j])]=1;
             }
             for (int j=0;j<100004;j++){
                 if (c[j]==1){
                     b[j]++;
                 }
             }
         }
         int s=0;
         for (int i=0;i<100004;i++){
             if (b[i]==n) s++;
         }
         cout <<s<<endl;
    }
    return 0;
}