#include<bits/stdc++.h>
using namespace std;
void lowCase(string &a){
     for (int i=0;i<a.size();i++){
        if (a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
    }
}
int main (){
    string a;
    getline (cin,a);
    lowCase(a);
    string b;
   
    vector<string> findz;
    
    while (a[0]==' ') a.erase(a.begin());
    while (a[a.size()-1]==' ') a.erase(a.end());
    for (int i=0;i<a.size()-1;i++){
        if (a[i]==' ' && a[i+1]==' '){
            a.erase(a.begin()+i);
            i--;
        }
    }
    int z= a.size()-1;
    while (z>0 && a[z]!=' '){
        
        b.push_back(a[z]);
        z--;
    }
    reverse(b.begin(),b.end());
    cout <<b;
    for (int j=0;j<z;j++){
        string tmp;
        while (a[j]!=' '&& j<z){
            tmp.push_back(a[j]);
            j++;
        }
        findz.push_back(tmp);
        tmp="";
    }
    for (int i=0;i<findz.size();i++){
        string k= findz[i];
       cout <<k[0];
    }
    
    cout <<"@ptit.edu.vn";

    return 0;
}