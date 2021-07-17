#include<bits/stdc++.h>
using namespace std;
int a[21];
int n;
void in (){
    for (int i=1;i<=n;i++){
        cout << a[i];
    }
    cout <<' ';
}
void tryz (int i){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n){
            in();
        }
        else{
            tryz (i+1);
        }
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        cin >>n;
        tryz(1);
        cout <<endl;
    }

    return 0;
}