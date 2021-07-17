#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int b[100007]={0};
        for (int i = 0;i<n;i++){
            cin >>a[i];
            b[a[i]]++;
        }
        for (int i = 0;i<100006;i++){
            if (b[i]%2!=0){
                cout <<i<<endl;
                break;
            }
        }
    }

    return 0;
}