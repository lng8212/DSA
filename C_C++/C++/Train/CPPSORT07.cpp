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
         int l = -1;
         int r = n;
         for (int i =0;i<n-1;i++){
             if (a[i]>a[i+1]) {
                 l=i;
                 break;
             }
         }
         for (int i = n-1;i>0;i--){
             if (a[i]<a[i-1]){
                 r = i;
                 break;
             }
         }
         int minz = a[l];
         int maxz = a[l];
         for (int i = l+1;i<=r;i++){
             if (a[i]>maxz) maxz = a[i];
             if (a[i]<minz) minz = a[i];
         }
         for (int i = 0;i<l;i++){
             if (a[i]>minz) {
                 l = i;
                 break;
             }
         }
         for (int i=n-1;i>r;i--){
             if (a[i]<maxz){
                 r = i;
                 break;
             }
         }
         cout <<l+1<<" "<<r+1<<endl;
    }

    return 0;
}