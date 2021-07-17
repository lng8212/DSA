#include<bits/stdc++.h>
using namespace std;


int main (){

    int q;
    cin >>q;
    string a;
    deque<int> ans;
    while (q--){
        cin >>a;
        if (a=="PUSHBACK"){
            int n;
            cin >>n;
            ans.push_back(n);
        }
        if (a=="PUSHFRONT"){
            int n;
            cin >>n;
            ans.push_front(n);
        }
        if (a=="PRINTFRONT"){
            if (ans.size()>0) cout <<ans.front();
            else cout <<"NONE";
            cout <<endl;
        }
        if (a=="PRINTBACK"){
            if (ans.size()>0) cout <<ans.back();
            else cout <<"NONE";
            cout <<endl;
        }
        if (a=="POPFRONT"){
            if (ans.size()>0) ans.pop_front();
        }
        if (a=="POPBACK"){
            if (ans.size()>0) ans.pop_back();
        }
    }

    return 0;
}