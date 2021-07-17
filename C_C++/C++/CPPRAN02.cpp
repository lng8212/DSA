#include<bits/stdc++.h>
using namespace std;

bool checkM(int a[], int l, int r){
    int pos = -1;
    for (int i=l;i<r;i++){
        if (a[i]>a[i+1]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) return 1;
    for (int i=pos;i<r;i++){
        if (a[i]<a[i+1]) {
            return 0;
        }
    }
    return 1;
}
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
        int l,r;
        cin >>l>>r;
        if (checkM(a,l,r)==1) cout <<"Yes";
        else cout <<"No";
        cout <<endl;

    }
    return 0;
}