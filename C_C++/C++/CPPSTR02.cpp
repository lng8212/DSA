#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        long long Sc=0,Sl=0;
        for (int i=0;i<a.size();i++){
            if (i%2==0) Sl=Sl+(a[i]-'0');
            else Sc=Sc+(a[i]-'0');
        }
        if ((Sc-Sl) %11 ==0) cout <<1;
        else cout <<0;
        cout <<endl;
    }

    return 0;
}