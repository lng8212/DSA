#include<bits/stdc++.h>
using namespace std;
int n,k,s,ans;
int a[25][25];
bool ok[25][25];
void Try (int i, int j){
    s+=a[i][j];
    if (i==n-1 && j ==n -1) {
        if (s==k) {
            ans++;
        }
    }
    else if (s<=k){
        if (i<n-1) Try(i+1,j);
        if (j<n-1) Try(i,j+1);
    }
    s-=a[i][j];
    
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