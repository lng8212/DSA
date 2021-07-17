#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int n, a[100006];
        cin >>n;
        for (int i=1;i<=n;i++){
            cin >>a[i];
        }
        int check =0;
        int i=n-1;
        while (i>0 && a[i]>a[i+1]) i--;
        if (i<=0) check=1;
        else {
            int k=n;
            while (a[k]<a[i]) k--;
            swap (a[k],a[i]);
            int l=i+1,r=n;
            while (l<r){
                swap (a[l],a[r]);
                l++,r--;
            }
        }
        if (check ==1 ) {
            for (int i=1;i<=n;i++){
                cout <<i<<' ';
            }
        }
        else {
            for (int i=1;i<=n;i++){
                cout <<a[i]<<' ';
            }
        }
        cout <<endl;
    }

    return 0;
}