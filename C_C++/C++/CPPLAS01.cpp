#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int a;    cin >>a;
        int s=a;
        while (s>=10){     s=0;
            while (a>0){
                
          s=s+a%10;
                a/=10;
            }      // cout <<s<<endl;F
        
            if (s>=10){
                a=s;
            }
        }
        cout <<s<<endl;
    }


    return 0;
}