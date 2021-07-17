#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int maxz  = -1;
        for (int i=0;i<n;i++){
            if (a[i]>maxz) maxz = a[i];
        }
        int pos = -2;
        for (int i=0;i<n;i++){
          if (i ==0) {
              if (a[i]== maxz  && a[i]>a[i+1]) pos = i;
          }
          else if (i==n-1){
              if (a[i]==maxz && a[i]>a[i-1]) pos = i;
          }
          else {
              if (a[i]==maxz &&  (a[i]>a[i+1] || a[i]>a[i-1])) pos = i;
          }
        }
        cout <<pos+1<<endl;
    }



    return 0;
}