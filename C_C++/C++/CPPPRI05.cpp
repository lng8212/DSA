#include<bits/stdc++.h>
using namespace std;
int a[100001];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i=2;i<100001;i++){
        a[i]=1;
    }
    for (int i=2;i<100001;i++){
        for (int j =2*i;j<100001;j+=i){
            a[j]=0;
        }
    }

}
int main (){
    Era();
    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n;
        for (int i=m;i<=n;i++){
            if (a[i]==1) cout <<i<<' ';
        }
        cout <<endl;
    }

    return 0;
}