#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin >>a>>b;
        string c=a,d=b;
        long long minz1=0;
        for (int i=0;i<c.size();i++){
            if (c[i]=='6') c[i]='5';
            minz1 =minz1 *10 +(c[i]-'0');
        }
        long long minz2=0;
        for (int i=0;i<d.size();i++){
            if (d[i]=='6') d[i]='5';
            minz2 =minz2 *10 +(d[i]-'0');
        }
        cout <<minz1+minz2<<' ';
        long long maxz1= 0; 
        long long maxz2=0;
        c=a,d=b;
        for (int i=0;i<c.size();i++){
            if (c[i]=='5') c[i]='6';
            maxz1= maxz1*10+(c[i]-'0');
        }
        for (int i=0;i<d.size();i++){
            if (d[i]=='5') d[i]='6';
            maxz2= maxz2*10+(d[i]-'0');
        }
        cout <<maxz1+maxz2<<endl;
    }
}