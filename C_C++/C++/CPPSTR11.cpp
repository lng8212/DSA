#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a,b;
        getline (cin ,a);
        getline(cin, b);
        int count = 0;
        int z[260]={0};
        for (int i = 0;i<b.size();i++){
            z[b[i]]++;
        }
        int start = -1;
        int dd[ 260]= {0};
        for (int i  = 0;i<a.size();i++){
            dd[a[i]]++;
            if(z[a[i]]!=0 && dd[a[i]]<=z[a[i]]){
                count ++;
            }
            if (count == b.size()){
                
            }
        }


    return 0;
}