    #include<bits/stdc++.h>
    using namespace std;
    int main(){
       int n;
       cin >>n;
       int a[100007];
       for (int i=0;i<n;i++){
           cin >>a[i];
       }
       int max=0;
       for (int i=0;i<n;i++){
           int S=1,tmp=a[i];
           for (int j=i+1;j<n;j++){
               if (a[j]>=tmp) {
                   S++;
                  if (a[j]>tmp) tmp=a[j];
               }
           }
           if (S>max) max=S;
       }
       cout <<max;
        return 0;
    }