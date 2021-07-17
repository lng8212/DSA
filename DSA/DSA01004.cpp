#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
void Try (int i){
    for (int j = a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            for (int z = 1;z<=k;z++){
                cout <<a[z];
            }
            cout <<" ";
        }
        else Try(i+1);
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n>>k;
        Try(1);
        cout <<endl;
    }

    return 0;
}