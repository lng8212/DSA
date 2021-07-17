#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin>>a>>b;
        if (a.size()<b.size()){
            while (a.size()<b.size()){
                a="0"+a;
            }
        }
        else if (b.size()<a.size()){
            while (b.size()<a.size()){
                b="0"+b;
            }
        }
        string c;
        c.resize(a.size());
        int k=0;
        for (int i=a.size()-1;i>=0;i--){
            int tmp = (a[i]-'0') + k+(b[i]-'0');
            if (tmp <10) {
                c[i]=tmp+'0';
                k=0;
            }
            else {
                k=1;
                c[i]=tmp-10+'0';
            }
        }
        if (k>0) cout <<k;
        cout <<c;  
        cout <<endl;
    }
    return 0;
}