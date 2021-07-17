#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int ans =0;
        for (int i=0;i<a.size();i++){
            ans = (2*ans+(a[i]-'0'))%5;
        }
        if (ans == 0 ) cout <<"Yes";
        else cout <<"No";

        cout <<endl;
    }

    return 0;
}