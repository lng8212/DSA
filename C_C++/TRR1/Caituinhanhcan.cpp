#include<bits/stdc++.h>
using namespace std;

int a[100];
int c[100];
int x[100];
int b, n;
int ans;
int anstmp;
int unused;
void input (){
    ans = 0;
    anstmp = 0;
    
    cin >>n>>b;
    unused = b;
    for (int i = 1 ;i<=n;i++){
        cin >>a[i] ;
    }
     for (int i = 1 ;i<=n;i++){
        cin >>c[i];
    }
     
}
 void Try (int i ){
     for (int j = c[i]/a[i];j>=0;j--){
         x[i]=j;
         anstmp+=c[i]*x[i];
         unused-=a[i]*x[i];
        // cout <<anstmp <<" ";
         if (i==n){
             cout <<endl;
             if (unused >=0 && anstmp >ans) ans = anstmp;
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
    cout <<ans;


    return 0;
}