#include<bits/stdc++.h>
using namespace std;

int a[101];
int c[101];
int x[101];
int fopt[101];
int b, n;
int ans;
int anstmp;
int unused;
int findx (int a, int b){
    if (a/b>=1) return 1;
    return 0;
}
void input (){
    ans = 0;
    anstmp = 0;
    
    cin >>n>>b;
    unused = b;
    for (int i = 1 ;i<=n;i++){
        cin >>c[i] ;
    }
     for (int i = 1 ;i<=n;i++){
        cin >>a[i];
    }
     
}
 void Try (int i ){
     for (int j = findx(c[i],a[i]);j>=0;j--){
         x[i]=j;
         anstmp+=c[i]*x[i];
         unused-=a[i]*x[i];
        // cout <<anstmp <<" ";
         if (i==n){
             cout <<endl;
             if (unused >=0 && anstmp >ans){
                 ans = anstmp;
                 for (int z = 1;z<=n;z++){
                     fopt[z] = x[z];
                 }
             }
         }
         else if (float(anstmp) + float(unused)*(float(c[i+1]/a[i+1])) > float(ans)) Try(i+1);
         anstmp-=c[i]*x[i];
         unused+=a[i]*x[i];

     }
 }
int main (){
    input();
    for (int i = 1;i<n-1;i++){
        for (int j = i+1;j<n;j++){
            if (float(c[i]/a[i])<float(c[j]/a[j])) {
                swap (a[i],a[j]);
                swap (c[i],c[j]);
            }
        }
    }
    Try(1);
    cout <<ans<<endl;
    for (int i = 1;i<=n;i++){
        cout <<fopt[i]<<' ';
    }


    return 0;
}