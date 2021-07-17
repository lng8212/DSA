#include<bits/stdc++.h>
using namespace std;
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int findx (int a[], int num, int n){
    for (int i = 0;i<n;i++){
        if (a[i]==num) return i;
    }
    return -1;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int zz[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
            zz[i]=a[i];
        }
        sort(zz,zz+n);
        int num = 0;
        for (int i = 0 ;i<n;i++){
            if (a[i]!=zz[i]) {
                num++;
                swap(a,i,findx(a,zz[i],n));
            }
        }
        cout <<num<<endl;
    }


    return 0;
}