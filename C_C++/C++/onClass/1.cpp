#include<bits/stdc++.h>
using namespace std;


int main (){

    vector<string> a;
    int n ;
    cin >>n;
    a.resize(n);
    cin.ignore();
    for (int i = 0 ;i<n;i++){
        getline(cin,a[i]);
    }
    fstream f;
    f.open("a.txt", ios::in | ios::out);
    for (int i = 0;i<n;i++){
        f << a[i]<<endl;
    }
    fstream fi;
    fi.open("b.txt", ios::out);
    while (!f.eof()){
        string t;
        getline(f,t);
        fi << t<<endl;
    }
    f.close();
    fi.close();
    return 0;
}