#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin,a);
        int s=0;
        for (int i=0;i<a.size();i++){
            while (a[i]!=' ' && a[i]!= '\t' && a[i]!='\n' && i<a.size()-1){
                i++;
            }
            s++;
        }
        cout <<s<<endl;
    }

    return 0;
}