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
        int left =-1;
        int right = n;
        for (int i=0;i<n;i++){
            if (a[i]==1){
                left = i;
                break;
            }
        }
        for (int i =n-1;i>=0;i--){
            if (a[i]==1) {
                right =i;
                break;
            }
        }
        int ans =0;
        for (int i = left;i<=right ;i++) {
            if (a[i]==0) ans++;
        }
        cout <<ans<<endl;

    }
    return 0;
}