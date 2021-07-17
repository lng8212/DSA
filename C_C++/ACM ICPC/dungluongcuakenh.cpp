#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,k;
    cin >>n>>k;
    int a[100007];
    int z=n+1;
    if (n%2==0) z=z+2;
    for (int i=1;i<=n;i++){
        cin >>a[i];
    }
    sort (a+1,a+n+1);
    int b[100007];
    int t=1;
    for (int i=z/2;i<=n-1;i++){
        b[t]=a[i+1]-a[i];
        t++;
    }
    int x=t;
    t=1;
    int S=a[z/2];
    while (k>0 &&t<n){
       if (k/(t+1)>=b[t]) {
           S=S+b[t];
          if (k-b[t]*t>=0) k=k-b[t]*(t);
           t++;
       }
       else {
           S=S+k/t;
           break;
       }
    }
    if (t>=n) S=S+k/x;
    cout <<S;
    return 0;
}