#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        long long a[n+1];
        long long b[m+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        for (int j=0;j<m;j++){
            cin >>b[j];
        }
        long long biggest = a[0];
        for (int i=1;i<n;i++){
                if (a[i]>biggest) biggest = a[i];
        }
        long long smallest=b[0];
        for (int j=1;j<m;j++){
            if (smallest>b[j]) smallest =b[j];
        }
        cout <<smallest*biggest<<endl;

    }

    return 0;
}