#include<bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        long long k;
        cin >>k;
        long long res=0;
        for (int i=0;i<a.size();i++){
            res=(res*10+(a[i]-'0'))%k;
        }
        cout <<res<<endl;
    }

    return 0;
}