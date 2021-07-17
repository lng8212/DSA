#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        long long ans=-99999999;
        long long tmp=0;
        for (int i=0;i<n;i++){
            tmp=tmp+a[i];
            if (tmp>ans) ans = tmp;
            if (tmp<0) tmp=0;
        }
        cout <<ans<<endl;
    }
}