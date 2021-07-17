#include<bits/stdc++.h>
using namespace std;


int main (){
    int q;
    cin >>q;
    string a;
    queue<int>ans;
    while (q--){
        cin >>a;
        if (a=="PUSH"){
            int n;
            cin >>n;
            ans.push(n);
        }
        if (a=="POP"){
            if (ans.size()>0) ans.pop();
        }  
        if (a=="PRINTFRONT"){
            if (ans.size()>0) cout <<ans.front();
            else cout <<"NONE";
            cout <<endl;
        } 
    }

    return 0;
}