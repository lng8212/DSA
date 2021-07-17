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
            cin>>a[i];
        }
        sort(a,a+n);
        int minz = 1e9+7;
        for (int i = 1;i<n;i++){
            if (a[i]-a[i-1]<minz) minz=a[i]-a[i-1];
        }
        cout <<minz<<endl;
    }

    return 0;
}