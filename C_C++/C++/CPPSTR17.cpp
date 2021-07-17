#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int b[300]={0};
        for (int i=0;i<a.size();i++){
            int k = a[i]-'0';
            b[k]++;
        }
        for (int i=0;i<a.size();i++){
            int k = a[i]-'0';
            if (b[k]==1) {
                cout <<a[i];
                b[k]=0;
            }
        }
        cout <<endl;
    }

    return 0;
}