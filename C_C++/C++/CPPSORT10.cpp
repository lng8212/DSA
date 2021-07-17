#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int b[11]={0};
        for (int i=0;i<n;i++){
            string a;
            cin >>a;
            for (int i=0;i<a.size();i++){
                int z=a[i]-'0';
                b[z]=1;
            }
        }
        for (int i=0;i<10;i++){
            if (b[i]!=0) cout <<i<<' ';
        }
        cout <<endl;
    }



    return 0;
}