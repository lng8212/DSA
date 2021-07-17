#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin,a);
        stack<int> kq;
        vector<int> ans;
        int contx = 1;
        stack<int> pos;
        for (int i = 0;i<a.size();i++){
            if (a[i]=='('){
                kq.push('(');
                pos.push(contx++);
                ans.push_back(pos.top());
            }
            if (a[i]==')' && kq.size()>0 && kq.top()=='('){
                ans.push_back(pos.top());
                pos.pop();
                kq.pop();
            }
        }
        for (int i = 0;i<ans.size();i++){
            cout << ans[i]<<" ";
        }
        cout <<endl;
    }
}