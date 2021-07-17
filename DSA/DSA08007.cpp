#include<bits/stdc++.h>
using namespace std;
// long long  stringToNum(string a){
//     long long s =0 ;
//     for (int i = 0;i<a.size();i++){
//         s=s*10+(a[i]-'0');
//     }
//     return s;
// }

int main (){

    int t;
    cin >>t;
    while (t--){
        string n;
        cin >>n;
        long long ans = 0;
        int m = n.size();
        int vt =m;
        for (int i = 0;i<m;i++){
            if(n[i]>'1') {
                vt = i;
                break;
            }
        }
        for (int i =vt;i<m;i++){
            n[i]='1';
        }
        for (int i = 0;i<m;i++){
            ans = ans + (n[i]-'0')*pow(2,m-i-1);
        }
        cout <<ans<<endl;
       
    }

    return 0;
}