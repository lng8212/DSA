#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        long long a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int S=0;
        for (int i=0;i<n;i++){
            if (a[i]==0) S++;
        }
        for (int i=0;i<n;i++){
            if (a[i]!=0) cout <<a[i]<<' ';
        }
        while (S--){
            cout <<0<<' ';
        }
        cout <<endl;
    }

    return 0;
}