#include<bits/stdc++.h>
using namespace std;

int nCr (int n, int r){
    if (r>n-r) r=n-r;
    int C[r+1];
    memset(C,0,sizeof(C));
    C[0]=1;
    for (int i = 1; i <= n; i++) { 
   
        for (int j = min(i, r); j > 0; j--) 
   
            C[j] = (C[j] + C[j - 1]) % 1000000007; 
    } 
    return C[r]; 
}

int main (){
    int m,s;
    cin >>m>>s;
    string a;
    a.clear();
    if (s==0) {
        cout <<"-1"<<' '<<"-1";
        return 0;
    }
    for (int i=0;i<m;i++){
        if (s>=9){
            a.push_back('9');
            s=s-9;
        }
        else if (s>0 && s<9){
            a.push_back(s+'0');
            s=0;
        }
        else {
            a.push_back('0');
        }
    }
    if (s>0) {
        cout <<"-1"<<' '<<"-1";
        return 0;
    }
    sort (a.begin(),a.end());
    string b=a;
    if (b[0]=='0'){
         for (int i=1;i<b.size();i++){
            if (b[i]!='0'){   
             b[i]=b[i]-1;
             b[0]='1';
             break;
        }

    }
    }
   
    for (int i=0;i<b.size();i++){
        cout <<b[i];
    }
    cout <<" ";
    for (int i=a.size()-1;i>=0;i--){
        cout <<a[i];
    }



    return 0;
}