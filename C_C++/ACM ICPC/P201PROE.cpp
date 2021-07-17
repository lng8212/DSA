#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        long long n;
        cin >>n;
        if (n/14 <1){
            cout <<"NO";
        }
        else {
            if (n%14>=1 && n%14<=6) cout <<"YES";
            else cout <<"NO";
        }
        cout <<endl;
    }

    return 0;
}