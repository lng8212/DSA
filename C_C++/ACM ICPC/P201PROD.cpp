#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int n;
        cin >>n;
        int k = n/4;
        if (n%4==0){
            for (int i=1;i<=n-k;i++){
                cout <<9;
            }
            for (int i=n-k+1;i<=n;i++){
                cout <<8;
            }
        }
        else {
            for (int i=1;i<n-k;i++){
                cout <<9;
            }
            for (int i=n-k;i<=n;i++){
                cout <<8;
            }
        }
        cout <<endl;
    }

    return 0;
}