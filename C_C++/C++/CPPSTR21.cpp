#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int s=0;
        for (int i=0;i<a.size();i++){
            if (a[i]>='0' && a[i]<='9'){
                s=s+(a[i]-'0');
                a.erase(a.begin()+i);
                i--;
            }
        }
        sort (a.begin(),a.end());
        cout <<a;
        cout <<s;
        cout <<endl;
    }



    return 0;
}