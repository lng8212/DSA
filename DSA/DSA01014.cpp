#include<bits/stdc++.h>
using namespace std;
int n,k,s;
long long ans;
int a[30];
void resetq(){
    a[0]=0;
    ans = 0;
}
void Try(int i){
   for (int j = a[i-1]+1;j<=n-k+i;j++){
           a[i]=j;
           if (i==k){
               int S = 0;
               for (int z = 1;z<=k;z++){
                   S+=a[z];
               }
               if (S==s) ans++;
           }
           else Try(i+1);
 }

}
int main (){

    while (1){
        resetq();
        cin >>n>>k>>s;
        if (n==0 && k==0 && s==0) break;
        Try(1);
        cout <<ans<<endl;
    }


    return 0;
}