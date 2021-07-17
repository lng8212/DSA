#include<bits/stdc++.h>
using namespace std;
bool check (int a[],int n){
    for (int i=0;i<n-1;i++){
        if (a[i]!=a[i+1]) return 1;
    }
    return 0;
}
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
        if (check(a,n)==0) cout <<-1;
        else{
            sort (a,a+n);
            cout <<a[0]<<' '<<a[1];
        }
        cout <<endl;
 
    }

    return 0;
}