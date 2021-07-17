#include<bits/stdc++.h>
using namespace std;


int main (){
    string a;
    getline (cin, a);
    for (int i = 0;i<a.size();i++){
        if (a[i]>='A' && a[i]<='Z') a[i]+=32;
    }
    vector<string> b;
    for (int i =0;i<a.size();i++){
        string tmp;
        while (a[i]!= ' ' && i<a.size()){
            tmp.push_back(a[i]);
            i++;
        }
        b.push_back(tmp); 
    }
    cout <<b[b.size()-1];
    string s;
    for (int i =0;i<b.size()-1;i++){
        string z= b[i];
        s.push_back(z[0]);
    }
    cout <<s<<"@ptit.edu.vn";


    return 0;
}