#include<bits/stdc++.h>
using namespace std;
int a[100007];
void Era (){
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
    int t;
    cin >>t;
    while (t--){
        int l,r;
        cin >>l>>r;
        int s=0;
        for (int i=l;i<=r;i++){
            if (a[i]==1) s++;
        }
        cout <<s<<endl;
    }

    return 0;
}