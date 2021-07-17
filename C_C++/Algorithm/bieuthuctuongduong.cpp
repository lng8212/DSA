#include<bits/stdc++.h>
using namespace std;

int main (){
    string a;
    cin >>a;
    string t;
    stack<char> ans;
    for (int i=0;i<a.size();i++){
        ans.push(a[i]);
        if (ans.top()==')') {
            ans.pop();
            string tmp;
            while (ans.top()!='('){
            tmp.push_back(ans.top());
            ans.pop();
            }
            ans.pop();
            if (ans.size()==0||ans.top()=='+'){
                for (int j=tmp.size()-1;j>=0;j--){
                    ans.push(tmp[j]);
                }
            }
            else if (ans.top()=='-'){
                for (int j=tmp.size()-1;j>=0;j--){
                    char c=tmp[j];
                    if (c=='+') c='-';
                    else if (c=='-') c='+';
                    ans.push(c);
                }
            }
            
        }
    }
    string kq;
    while (ans.size()){
        kq.push_back(ans.top());
        ans.pop();
    }
    for (int i=kq.size()-1;i>=0;i--){
        cout <<kq[i];
    }
    return 0;
}