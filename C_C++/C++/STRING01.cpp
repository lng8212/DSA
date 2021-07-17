#include<bits/stdc++.h>
using namespace std;

int main (){
    string a;
    getline(cin,a);
    string b;
    cin >>b;
    vector<string> findz;
    for (int j=0;j<a.size();j++){
        string tmp;
        while (a[j]!=' '&& j<a.size()){
            tmp.push_back(a[j]);
            j++;
        }
        findz.push_back(tmp);
        tmp="";
    }
    for (int i=0;i<findz.size();i++){
        if (findz[i]!=b) {
            cout <<findz[i]<<' ';
        }
    }
    return 0;
}