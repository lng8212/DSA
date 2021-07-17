#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        bool check = false;
        int vt = -1;
        for (int i = a.size()-1;i>=0;i--){
            if (a[i]=='1') {
                a[i]='0';
                check = true;
                vt=i;
                break;
            }
        }
        if (vt!=-1){
            for (int i =vt+1;i<a.size();i++){
                a[i]='1';
            }
        }
        if (check == false ) {
            for (int i = 0;i<a.size();i++){
                cout <<'1';
            }
        }
        else {
            for (int i = 0;i<a.size();i++){
                cout <<a[i];
            }
        }
        cout <<endl;
    }


    return 0;
}