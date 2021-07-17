#include<bits/stdc++.h>
using namespace std;
int a[1000006];
void Era (){
    a[0]=0;
    a[1]=0;
    for (int i = 2;i<1000001;i++){
        a[i]=1;
    }
    for (int i = 2;i<1000001;i++){
        for (int j=2*i;j<1000001;j+=i){
            a[j]=0;
        }
    }
}
int main (){

    int t;
    cin >>t;
    Era();
    while (t--){
        int n ; 
        cin >>n;
        for (int i =1;i<=sqrt(n);i++){
            if ( (a[i] == 1)) cout <<i*i<<" ";
        }
        cout <<endl;
    }

    return 0;
}