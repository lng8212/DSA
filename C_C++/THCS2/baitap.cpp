#include<bits/stdc++.h>
using namespace std;
#define max 100007
int a[max];
int n;
void nhap(){
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
}
void xuat(){
    for (int i=0;i<n;i++){
        cout <<a[i]<<' ';
    }
}
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >>n;
    nhap();
    int check=0;
    int b[max];
    for (int i=0;i<n;i++){
        b[a[i]]++;
    }
    for (int i=0;i<n;i++){
        if (b[a[i]]==1) {
            check=1;
            cout <<a[i]<<' ';
        }
    }
    if (check ==0 ) cout <<check;
    return 0;
}