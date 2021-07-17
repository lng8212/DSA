#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        set<int> check;
        for (int i = 0;i<n;i++){
            cin >>a[i];
            check.insert(a[i]);
        }
        int i = 0;
        bool kt = false;
        for (set<int>::iterator it = check.begin();it != check.end();it++,i++){
            if (*it!=a[i]) {
                kt = true;
                break;
            }
        }
        if (kt == true) cout <<"0";
        else cout <<"1";
        cout <<endl;
    }

    return 0;
}