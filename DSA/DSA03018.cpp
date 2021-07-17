#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        string ans = "";
        while (n>0 && n%7!=0){
            ans+="4";
            n-=4;
        }
        if (n<0) {
            cout <<"-1"<<endl;
        }
        else {
            int k  = n/7;
            for (int i = 0;i<k;i++){
                ans+="7";
            }
            cout <<ans<<endl;
        }
        
    }


    return 0;
}