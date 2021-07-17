#include<bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin >>T;
    while (T--){
        long long n,k;
        cin >>n>>k;
        if (n%k==0){
            int S=n/k;
            if (S%2==0){
                cout<<"NO";
            }
            else cout <<"YES";
        }
        else {
            int S=n/k;
            if (S%2==0) cout <<"NO";
            else cout <<"YES";
        }
        cout <<endl;
    }
    return 0;
}