#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int b[300]={0};
        for (int i = 0;i<a.size();i++){
            b[a[i]]++;
        }
        int lar = 0;
        for (int i = 0;i<300;i++){
            lar = max(lar,b[i]);
        }
        int z = a.size();
        if (z%2!=0){
            if (lar<=(z/2)+1) cout <<"1";
            else cout <<"-1";
        }
        else {
            if (lar<=z/2) cout <<"1";
            else cout <<"-1";
        }
        cout <<endl;
    }


    return 0;
}