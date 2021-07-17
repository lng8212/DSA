#include<bits/stdc++.h>
using namespace std;

int binaryS(int a[], int l, int r, int x ){
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid] < x) return 1;
        if (a[mid] >= x) r = mid-1; 
    }
    return -1;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int s  =0 ;
        for (int i = 0;i<n-2;i++){
            for (int j = i+1;j<n-1;j++){
                int z = a[i]+a[j];
                if (binaryS(a,j+1,n-1,k-z) !=-1) s++;
            }
        }
        cout <<s<<endl;

    }

    return 0;
}