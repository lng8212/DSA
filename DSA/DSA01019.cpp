#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
bool check (){
    if (a[1]==0) return false;
    if (a[n]==1) return false;
    for (int i = 2;i<=n;i++){
        if (a[i-1]==a[i] && a[i]==1) return false;
    }
    return true;
}
void Try (int i ){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n){
            if (check()==true){
                for (int i = 1;i<=n;i++){
                    if (a[i]==1) cout <<"H";
                    else cout <<"A";
                }
                cout <<endl;
            }
        }
        else Try(i+1);
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n;
        Try(1);
    }



    return 0;
}