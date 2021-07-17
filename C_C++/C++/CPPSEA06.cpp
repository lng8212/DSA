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
        int ans = 200000001;
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (abs (ans)> abs (a[i]+a[j])) ans = a[i]+a[j];
            }
        }
        cout <<ans<<endl;
    }

    return 0;
}