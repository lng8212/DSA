#include<bits/stdc++.h>
using namespace std;


int a[10],n,k;
 bool ok[10];
void print(){
    for (int q =1 ;q<=k ;q++){
        cout <<a[q]<<' ';
    }
    cout <<endl;
}
void sinh (int i){
    for (int j=a[i-1]+1;j<=n-k+i;j++){
            a[i]=j;
            if (i==k) print();
            else {
                sinh(i+1);
            }
        }
    }
int main (){
    n = 5;k=3;
    sinh(1);


    return 0;
}