#include<bits/stdc++.h>
using namespace std;


int main (){
    
    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i =0 ;i<n;i++){
            cin >>a[i];
        }
        int s = 0 ;
        for (int i = 0;i<n-1;i++){
            for (int j = i+1;j<n;j++){
                if (a[i]+a[j]==k) s++;
            } 
        }
        cout <<s<<endl;
    }
    return 0;
}