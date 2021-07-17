#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int *a = new int[n];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int *Lmin = new int[n];
        int *Rmax = new int[n];
        Lmin[0]=a[0];
        for (int i = 1;i<n;i++){
            Lmin[i]=min(a[i],Lmin[i-1]);
        } 
        Rmax[n-1] = a[n-1];
        for (int i = n-2;i>=0;i--){
            Rmax[i] = max (Rmax[i+1],a[i]);
        }
        int i = 0,j = 0 , ans = -1;
        while (i<n && j<n){
            if (Lmin[i] < Rmax[j]){
                ans = max (ans, j-i);
                j++;
            }
            else i++;
        }
        cout <<ans <<endl;
    }

    return 0;
}