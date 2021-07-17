#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        string a;
        cin >>a;
        int b[300]={0};
        int fre = 0;
        for (int i = 0;i<a.size();i++){
            b[a[i]]++;
            if (fre<b[a[i]]) fre = b[a[i]];
        }
        int zz = (fre-1)*(n-1);
        if(a.size()-fre>=zz) cout <<1;
        else cout <<-1;
        cout <<endl;
    }


}