#include<bits/stdc++.h>
using namespace std;


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
        for (int i=0;i<n-1;i++){
            if (a[i+1]!=0 && a[i+1]==a[i]){
                a[i]=a[i]*2;
                a[i+1]=0;
            }
        }
        vector<int > b;
        b.clear();
        for (int i=0;i<n;i++){
            if (a[i]!=0) b.push_back(a[i]);
        }
        int length = b.size();
        for (int i=0;i<length;i++){
            cout <<b[i]<<' ';
        }
        int z = n-length;
        for (int i=0;i<z;i++){
            cout <<0<<' ';
        }
        cout <<endl;
            
    }

    return 0;
}