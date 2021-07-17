#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        long long n;
        cin >>n;
        long long *a = new long long [n+1];
        long long *b = new long long [n+1];
        for (int i =0;i<n;i++){
            b[i]=0;
        }
        for (int i = 0;i<n;i++){
            cin >>a[i];
            if (a[i]<n && a[i]>=0) b[a[i]] = 1;
        }
        for (int i = 0;i<n;i++){
            if (b[i]==1) cout <<i<<" ";
            else cout <<"-1"<<" ";  
        }
        cout <<endl;

    }


    return 0;
}