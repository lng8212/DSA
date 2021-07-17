#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    stack<int> ans;
    while (t--){
        string a;
        cin >>a;
        if (a=="PUSH") {
            int n;
            cin >>n;
            ans.push(n);
        }
        if (a=="POP"){
            if (ans.size()>0) ans.pop();
        }
        if (a=="PRINT"){
            if (ans.size()==0) cout <<"NONE"<<endl;
            else cout <<ans.top()<<endl;
        }
    }



    return 0;
}