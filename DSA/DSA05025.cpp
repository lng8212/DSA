#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        long long a[n+1]={0};
        a[0]=1;
        a[1]=1;
        for (int i = 2;i<=n;i++){
            for (int j = 1;j<=min(i,3);j++){
                a[i]+=a[i-j];
            }
        }
        cout <<a[n]<<endl;
        
    }


    return 0;
}