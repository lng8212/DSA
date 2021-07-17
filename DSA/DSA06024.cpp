#include<bits/stdc++.h>
using namespace std;


int main (){

    int n;
    cin >>n;
    int a[n+1];
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    for (int i = 0;i<n-1;i++){
        int z = a[i];
        int pos = i;
        for (int j = i+1;j<n;j++){
            if (a[j]<z) {
                z=a[j];
                pos = j;
            }
        }
        swap(a[i],a[pos]);
        cout <<"Buoc " <<i+1<<": ";
        for (int j=0;j<n;j++){
            cout <<a[j]<<" ";
        }
        cout <<endl;
    }

}