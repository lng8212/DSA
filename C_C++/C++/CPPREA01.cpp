#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        long long a[n+1];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        long long b[n+1];
        for (int i=0;i<n;i++){
            b[i]=-1;
        }
        for (int i=0;i<n;i++){
           if (a[i]<n && b[a[i]]==-1 ){
               b[a[i]]=a[i];
           }
        }
        for (int i=0;i<n;i++){
            cout <<b[i]<<' ';
        }
        cout <<endl;
    }
    return 0;
}