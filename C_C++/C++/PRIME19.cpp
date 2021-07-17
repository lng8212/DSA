#include<bits/stdc++.h>
using namespace std;
int a[100007];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i=2;i<100007;i++){
        a[i]=1;
    }
    for (int i=2;i<100007;i++){
        for (int j=2*i;j<100007;j+=i){
            a[j]=0;
        }
    }
}
int main (){
    Era();
    int c,b;
    cin >>c>>b;
    if (c>b) swap (c,b);
    for (int i=c+1;i<b;i++){
        if (a[i]==1) cout <<i<<' ';
    }

    return 0;
}