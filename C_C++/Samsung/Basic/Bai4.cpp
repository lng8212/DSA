#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        string a;
        cin >>a;
        int check=0;
        for (int i=a.size()-1;i>=0;i--){
            if (a[i]=='1'){
                a[i]='0';
                for (int j=i+1;j<a.size();j++){
                    a[j]='1';
                }
                break;
            }
            else if (i==0) check=1;
        }
        if (check == 0) cout <<a;
        else {
            for (int i=0;i<a.size();i++){
                cout <<'1';
            }
        }
        cout <<endl;
    }

    return 0;
}