#include<bits/stdc++.h>
using namespace std;


int main (){
    string a,b,c;
    cin >>a>>b>>c;
    int S=0;
    for (int i=0;i<a.size();i++){
        for (int j=0;j<b.size();j++){
            for (int k=0;k<c.size();k++){
                if (a[i]==b[j]&& a[i]==c[k]){
                    S++;
                    b[j]=' ';
                    c[k]=' ';
                    continue; 
                }
            }
        }
    }
    cout <<S;


    return 0;
}