#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int k){
    int tang = -1;
    for (int i = k ;i<n-1;i++){
        if (a[i]>a[i+1]){
            tang = i;
            break;
        }
    }
    if (tang == -1) return 1;   
    int giam = -1;
    for (int i = k;i<n-1;i++){
        if (a[i]<a[i+1]){
            giam = i;
            break;
        }
    }
    if (giam == -1) return 1;
    for (int i =tang;i<n-1;i++){
        if (a[i]>a[i+1]) return 0;
    }
    return 1;
}

int main (){

    int t;
    cin >>t;
    while (t--){
        int n ;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int s =1;
        for (int i=0;i<n;i++){
            for (int j =i+1;j<n;j++){
                if (check(a,j,i)==1) {
                     s = max (s,j-i+1);
                }
            }
        }
        cout <<s<<endl;
    }



    return 0;
}