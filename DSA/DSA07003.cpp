#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin,a);
        stack<char> kq;
        bool check= 0;
        for (int i = 0;i<a.size();i++){
            if (a[i]==')'){
                check = 1;
                while (kq.size()>0 && kq.top()!='('){
                    if (kq.top()=='+'|| kq.top()=='-'|| kq.top()=='*'||kq.top()=='/') check = 0;
                    kq.pop();
                }
                kq.pop();
                if (check == 1) break;
            }
            else kq.push(a[i]);
        }
        if (check == 1) cout <<"Yes";
        else cout <<"No";
        cout <<endl;
    }


    return 0;
}