#include<bits/stdc++.h>
using namespace std;
int n, a[11];
bool check[11];
void Try (int i ){
    for (int j = 1;j<=n;j++){
        if (check[j]==0){
            check[j]=1;
            a[i]=j;
            if (i==n){
                for (int i =1;i<=n;i++){
                    cout <<a[i];
                }
                cout <<" ";
            }
            else Try(i+1);
            check[j]=0;
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        memset(check,0,sizeof(check));
        cin >>n;
        Try(1);
        cout <<endl;
    }

    return 0;
}