#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        long long ans =-9999999999999;
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        for (int i=0;i<n;i++){
            long long tmp=1;
            for (int j=i;j<n;j++){
                tmp = tmp * a[j];
                if (tmp > ans ) ans = tmp;
            }
        }
        cout <<ans <<endl;
    }

    return 0;
}