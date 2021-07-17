#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[30];
void Input (){
    for (int i=1;i<=k;i++){
        a[i]=i;
    }
}
//bool check [100] = {0};
void Try (int i){
        for (int j=a[i-1]+1;j<=n-k+i;j++){
          //  if (check [j]== 0){
                a[i]=j;
               // check [j]=1;
          // }
            if (i==k){
                for (int z=1;z<=k;z++){
                    cout <<a[z];
                }
                cout <<" ";
            }
            else {
                Try (i+1);
            }
           // check [j]= 0;
            
        }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        cin >>n>>k;
        Input();
        Try(1);
        cout <<endl;
    }
    return 0;
}