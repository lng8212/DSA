#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int b[100006]={0};
        for (int i=0;i<n;i++){
            cin >>a[i];
            b[a[i]]++;
        }
        int S=0;
        sort(a,a+n);
        int minz = a[0];
        int maxz=a[n-1];
        for (int i=minz;i<=maxz;i++){
            if  (b[i]==0) S++;
        }
        cout <<S<<endl;

    }
    return 0;
}