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
        long long tmp;
        long long l =0;
        long long r = a[0];
        for (int i =1;i<n;i++){
            tmp = max (l,r);
            r = l +a[i];
            l= tmp;
        } 
        cout <<max (l,r)<<endl;
    }
    return 0;
}