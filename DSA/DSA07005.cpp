#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<char> kq;
        for (int i = 0;i<a.size();i++){
            if (a[i]!=')'){
                kq.push(a[i]);
            }
            else {
                string tmp="";
                while (kq.size()>0 && kq.top()!='('){
                    tmp.push_back(kq.top());
                    kq.pop();
                }
                if (kq.size()>0){
                    kq.pop();
                }
                if (kq.size()>0 && kq.top()=='-'){
                    for (int i = 0;i<tmp.size();i++){
                        if (tmp[i]=='-') tmp[i]='+';
                        else if (tmp[i]=='+') tmp[i]='-';
                    }
                    for (int i = tmp.size()-1;i>=0;i--){
                        kq.push(tmp[i]);
                    }
                }
                else {
                    for (int i = tmp.size()-1;i>=0;i--){
                        kq.push(tmp[i]);
                    }
                }
            }
        }
        string ans="";
        while (kq.size()>0){
            ans.push_back(kq.top());
            kq.pop();
        }
        for (int i = ans.size()-1;i>=0;i--){
            cout <<ans[i];
        }
        cout <<endl;
    }



    return 0;
}