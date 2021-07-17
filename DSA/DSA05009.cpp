#include<bits/stdc++.h>
using namespace std;

int s;
int n;
int a[200];
bool check[200];
bool ktra;
void Try (int i, int sum){
    if (sum==s-sum) {
        ktra = 1;
        return;
    }
    for (int j = i;j<=n;j++){
        if (sum+a[j]<=s-(sum + a[j]) && check[j] == 0 && ktra == 0){
            check[j]= 1;
            Try(j,sum+a[j]);
            check[j]=0;
        }
    }   
}

int main (){

    int t;
    cin >>t;
    while (t--){
        memset(check,0,sizeof(check));
        ktra = 0;
        s = 0;
        cin >>n;
        for (int i = 1;i<=n;i++){
            cin >>a[i];
            s+=a[i];
        }
        if (s%2!=0) cout <<"NO"<<endl;
        else {
            Try(1,0);
            if (ktra == 1) cout <<"YES"<<endl;
            else cout <<"NO"<<endl;
        }
    }


    return 0;
}