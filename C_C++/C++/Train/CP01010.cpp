#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int L[n+1];
        int R[n+1];
        L[0]=a[0];
        R[n-1]=a[n-1];
        for (int i = 1;i<n;i++){
            L[i]=L[i-1]+a[i];
        }
        for (int i = n-2;i>=0;i--){
            R[i]=R[i+1]+a[i];
        }
        bool check = 0;
        for (int i = 0;i<n;i++){
            if (L[i]==R[i]) {
                check = 1;
                cout <<i+1;
                break;
            }
        }
        if (check == 0) cout <<"-1";
        cout <<endl;
    }


    return 0;
}