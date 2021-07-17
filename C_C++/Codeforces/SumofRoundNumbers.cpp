#include<bits/stdc++.h>
using namespace std;
int count (int n){
    int S=0;
    while (n>0){
        if (n%10>0) S++;
        n=n/10;
    }
    return S;
}
int main (){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin >>n;
        cout <<count(n)<<endl;
        int pos=0;
        while (n>0){
            int a=n%10;
            if (a>0){
                int z=pos;
                while (z>0){
                    a=a*10;
                    z--;
                }
                
            }
            if (a>0)cout <<a<<' ';
           pos++;
            n=n/10;
        }
        cout <<endl;

    }
    return 0;
}