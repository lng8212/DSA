#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int a,b;
        cin >>a>>b;
        if (a>=b) cout <<"YES";
        else {
            if (a==1 || a==3) {
                cout <<"NO";
            }
            else cout <<"YES";
        }
        cout <<endl;
    }


    return 0;
}