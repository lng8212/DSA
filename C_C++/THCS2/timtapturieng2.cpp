#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    vector<string>c;
    vector<string>d;
    a+=' ';
    string tmp="";
    for (int i=0;i<a.size();i++){
        if (a[i]==' '){
            c.push_back(tmp);
            tmp.clear();
        }
        else {
            tmp+=a[i];
        }
    }
    getline(cin,b);
    b+=' ';
    string tmp1;
    for (int i=0;i<b.size();i++){
        if (b[i]==' '){
            d.push_back(tmp1);
            tmp1.clear();
        }
        else {
            tmp1+=b[i];
        }
    }
     
    sort(c.begin(),c.end());
    for (int i=0;i<c.size()-1;i++){
        if (c[i]==c[i+1]){
            c.erase(c.begin()+i);
            i--;// abc ab ab ab abcd
        }
    }
    for (int i=0;i<c.size();i++){
        bool check=0;
        for (int j=0;j<d.size();j++){
            if (c[i]==d[j]) {
                check=1;
            }      
        }
      if (check==0) cout <<c[i]<<' ';
    }
    return 0;
}