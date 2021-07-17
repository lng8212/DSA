#include<bits/stdc++.h>
using namespace std;
long long a[1001];
void process(){
     
     a[0]=0;
     a[1]=1;
     for (int i=2;i<=1000;i++){
         a[i]=(a[i-1]+a[i-2])%(1000000007);
     }
}
int main (){
    int T;
    cin >>T;
    process();
    while (T--){
        int n ;
        cin >>n;
        cout <<a[n]<<endl;
    }
    return 0;
}