#include<bits/stdc++.h>
using namespace std;
int binaryS(int a[],int l, int r, int x){
    while (l<=r){
        int m = (l+r)/2;
        if (a[m]==x) return m;
        else if (a[m]>x) r = m-1;
        else l = m+1;
    }
    return -1;
}

int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int *a = new int [n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        sort(a,a+n);
        if (binaryS(a,0,n-1,k)==-1) cout<<"NO";
        else cout <<binaryS(a,0,n-1,k)+1;
        cout <<endl;
    }

    return 0;
}