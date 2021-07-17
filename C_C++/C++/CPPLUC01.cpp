#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while(t--){
        string a;
        cin >>a;
        int z=a.size();
        if (a[z-1]=='6' && a[z-2]=='8') cout <<1<<endl;
        else cout <<0<< endl;
    }

    return 0;
}