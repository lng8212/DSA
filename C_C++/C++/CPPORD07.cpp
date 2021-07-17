#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        int maxz = -1;
        for (int i=1;i<=k;i++){
            if (a[i]>maxz) maxz = a[i];
        }
        cout <<maxz<<' ';
        for (int i=2;i<=n;i++){
            if (i+k-1<=n ){
                if ( a[i+k-1]> maxz) maxz=a[i+k-1];
                cout <<maxz<<' ';
            }
        } 
        cout <<endl;
    }
    return 0;
}