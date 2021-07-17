#include<bits/stdc++.h>
using namespace std;
int a[1000006];
void Era(){
    a[1]=0;
    a[0]=0;
    for (int i=2;i<1000001;i++){
        a[i]=1;
    }
    for (int i=2;i<1000001;i++){
        for (int j=2*i;j<1000001;j+=i){
            a[j]=0;
        }
    }
}
int main (){
    Era();
    int t;
    cin >>t;
    while (t--){
        int s=0;
        long long l,r;
        cin >>l>>r;
        for (int i=sqrt(l);i<=sqrt(r);i++){
            if (a[i]==1) s++;
        }
        cout <<s<<endl;
    }


    return 0;
}