#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        sort (a,a+n);
        int l = 0,r =n-1;
        while (l<r){
            cout <<a[r]<<" "<<a[l]<<" ";
            r--;l++;
        }
        if (n%2!=0) cout <<a[l]<<" ";
        cout <<endl;
    }


    return 0;
}