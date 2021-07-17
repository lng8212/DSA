#include<bits/stdc++.h>
using namespace std;
int a[1000002];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i = 2;i<1000001;i++){
        a[i]=1;
    }
    for (int i =2;i<1000001;i++){
        for (int j = 2*i;j<1000001;j+=i){
            a[j]=0;
        }
    }
}
int main (){
    Era();
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        bool check = 0;
        for (int i = 2;i<=n/2;i++){
            if (a[i]==1 && a[n-i]==1){
                cout <<i<<" "<<n-i<<endl;
                check = 1;
                break;
            }
        }
        if (check == 0) cout <<"-1"<<endl;
    }

    return 0;
}