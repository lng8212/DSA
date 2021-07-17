#include<bits/stdc++.h>
using namespace std;
int binaryS(int a[], int l, int r, int x){
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid ]== x) return 1;
        else if (a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1;
    
}

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >>n>>x;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        bool check =0;
        for (int i=0;i<n;i++){
            if (binaryS(a,0,n-1,a[i]+x)==1) {
                cout <<1;
                check =1;
                break;
            }
        }
        if (check ==0) cout <<-1;
        cout <<endl;
        
    }


    return 0;
}