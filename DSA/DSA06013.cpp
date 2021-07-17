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
        int fre = 0;
        for (int i = 0;i<n;i++){
            if (a[i]==x) fre++;
        }
        if (fre == 0 ) cout <<-1;
        else cout <<fre;
        cout <<endl;
    }


    return 0;
}