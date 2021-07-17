#include<bits/stdc++.h>
using namespace std;

void process(){
    string a;
    cin >>a;
    bool check = false;
    int i = a.size()-1;
    while (i>=0 && a[i]=='1') i--;
    if (i<0) {
        for (int j=0;j<a.size();j++){
            cout <<0;
        }
        cout <<endl;
        return;
    }
    a[i]='1';
    for (int j = i+1;j<a.size();j++){
        a[j]='0';
    }
    for (int j = 0;j<a.size();j++){
        cout <<a[j];
    }
    cout <<endl;
}

int main(){
    
    int t;
    cin >>t;
    while (t--){
        process();
    }

    return 0;
}