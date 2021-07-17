#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n;
        int *a = new int [m+1];
        int *b = new int [n+1];
        for (int i = 0;i<m;i++){
            cin >>a[i];
        }
        for (int j = 0;j<n;j++){
            cin>>b[j];
        }
        int maxA = a[0];
        int minB = b[0];
        for (int i = 1;i<m;i++){
            maxA = max(maxA,a[i]);
        }
        for (int  i = 1;i<n;i++){
            minB = min(minB,b[i]);
        }
        cout <<(long long) (maxA)*minB<<endl;
    }


    return 0;
}