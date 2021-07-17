#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >>n>>x;
        int a[n+1];
        bool t = false;
        for (int i = 0;i<n;i++){
            cin >>a[i];
            if (a[i]==x) t = true;
        }
        if (t==false ) cout <<"-1";
        else cout <<1;
        cout <<endl;

    }

    return 0;
}