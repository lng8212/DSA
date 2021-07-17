#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int n;
        cin >>n;
        long long kq [100007]={0};
        kq[0]=1;
        kq[1]=1;
        for (int i=2;i<=n;i++){
            for (int j=1;j<=min (i,3);j++){
                kq[i]+=kq[i-j];
            }
        }
        cout <<kq[n]<<endl;
    }

    return 0;
}