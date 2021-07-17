#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        long long n,k;
        cin >>n>>k;
        long long a[n+1];
        long long s = 0;
        if (k>n/2) k=n-k;
        for (long long i =0;i<n;i++){
            cin >>a[i];
            s+=a[i];
        }
        sort(a,a+n);
        long long s1=0;
        for (long long i = 0;i<k;i++){
            s1+=a[i];
        }
        cout << (s-s1) - s1<<endl; 
    }



    return 0;
}