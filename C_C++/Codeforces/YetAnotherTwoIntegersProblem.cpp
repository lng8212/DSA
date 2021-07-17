#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int a,b;
        cin >>a>>b;
        if (a==b) {
            cout <<"0";
        }
        else {
            int k = abs (a-b);
            if (k%10==0) cout <<k/10;
            else cout <<k/10+1;
        }
        cout <<endl;
    }

    return 0;
}