#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[k+1];
        for (int i = 0;i<k;i++){
            cin >>a[i];
        }
        int i = k-1;
        bool check = 0;
        while (i>=0 && a[i]==n-k+i+1) i--;
        if (i<0) check = 1;
        if (check == 0){
            a[i]++;
            for (int j = i+1;j<k;j++){
                a[j]=a[j-1]+1;
            }
        }
        if (check == 1) {
            for (int i = 0;i<k;i++){
                cout <<i+1<<" ";
            }
        }
        else {
            for (int i = 0;i<k;i++){
                cout <<a[i]<<" ";
            }
        }
        cout <<endl;
    }


    return 0 ;
}