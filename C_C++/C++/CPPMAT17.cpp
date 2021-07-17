#include<bits/stdc++.h>
using namespace std;
int n,k,s,ans;
int a[25][25];
bool ok[25][25];
void Try (int i, int j){
    if (s>k || i>=n||j>=n) {
        s=0;
        cout <<endl;
        return;
    }
    if (s==k && i==n-1 && j ==n -1) {
        ans++;
        s=0;
        return;
    }
    cout <<i<<' '<<j<<"|";
    s+=a[i][j];
    if (ok[i][j+1]==0) {
        ok[i][j+1]=1;
        Try(i,j+1);
        ok[i][j+1]=0;
    }
    if (ok[i+1][j]==0) {
        ok[i+1][j]=1;
        Try (i+1,j);
        ok[i+1][j]=0;
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        s=0;
        ans =0;
        memset(ok,0,sizeof(ok));
        cin >>n>>k;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin >>a[i][j];
            }
        }
        Try(0,0);

        cout <<ans<<endl;
        

    }


    return 0;
}