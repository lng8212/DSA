#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        for (int i = 0;i<n-1;i++){
            int s = a[i];
            bool check = 0;
            for (int j = i+1;j<n;j++){
                if (a[j]>=s) check = 1;
            }
            if (check == 0) cout <<s<<" ";
        }
        cout <<a[n-1];
        cout <<endl;
    }

    return 0;
}