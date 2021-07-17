#include<bits/stdc++.h>
using namespace std;



int main (){
    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >>n>>x;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        bool check = 0;
        for (int i = 0;i<n;i++){
            
            if (lower_bound(a,a+n,a[i]+x)-a<n) {
                check = 1;
                 break;
             }
        }
        if (check == 1) cout <<1;
        else cout <<-1;
        cout <<endl;
    }



    return 0;
}