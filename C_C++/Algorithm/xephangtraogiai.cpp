#include<bits/stdc++.h>
using namespace std;
int binary(int a[], int l, int r, int x){
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid]==x) return mid;
        else if (a[mid]>x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main (){
    int n;
    cin >>n;
    int a[100008]={};
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int b[100008]={};
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort (b,b+n);
    for (int i=0;i<n;i++){
        cout <<binary(b,0,n-1,a[i])<<' ';
    }
    return 0;
}