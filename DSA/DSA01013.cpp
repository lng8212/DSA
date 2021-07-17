#include<bits/stdc++.h>
using namespace std;



int main (){


    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        string b;
        b.push_back(a[0]);
        for (int i = 1;i<a.size();i++){
            if (a[i]=='0'){
                b.push_back(b[i-1]);
            }
            else {
                if (b[i-1]=='0') b.push_back('1');
                else b.push_back('0');
            }
        }
        for (int i = 0;i<b.size();i++){
            cout <<b[i];
        }
        cout <<endl;
    }
    return 0;
}