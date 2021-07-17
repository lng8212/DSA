#include<bits/stdc++.h>
using namespace std;
int a[20],n,k;
void Try (int i ){
    for (int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            for (int i = 1;i<=k;i++){
                cout <<a[i]<<' ';
            }
            cout <<endl;
        }
        else Try(i+1);
    }
}
int main (){
    cin >>n>>k;
    a[0]=0;
    Try(1);


    return 0;
}