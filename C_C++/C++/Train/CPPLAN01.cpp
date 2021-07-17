#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin >>a>>b;
        while (a.size()< b.size()){
             a= "0" +a;
        }
        while (b.size()< a.size()){
            b= "0" +b;
        }
        if (b>a ) swap (a,b);
        string c; 
        c.resize(a.size());
        int mem = 0;
        for (int i = c.size()-1;i>=0;i--){
            int n1 = a[i]-'0'-mem;
            mem = 0;
            int n2 = b[i]-'0';
            int z = n1-n2;
            if (z<0) {
                mem++;
                z+=10;
            }
            c[i]= z + '0';
        }
        for (int i = 0;i<c.size();i++){
            cout <<c[i];
        }
        cout <<endl;
    }


    return 0;
}