#include<bits/stdc++.h>
using namespace std;

char xorz (char a, char b){
    if ((a=='0' && b=='1')||(a=='1' && b=='0' )) return '1';
    return '0';
}
int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        string b;
        b.push_back(a[0]);
        for (int i = 1;i<a.size();i++){
            b.push_back(xorz(a[i-1],a[i]));
        }
        for (int i = 0;i<b.size();i++){
            cout <<b[i];
        }
        cout <<endl;
    }

    return 0;
}