#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<string> ans;
        for (int i =a.size()-1;i>=0;i--){
            if (a[i]=='+'|| a[i]=='-' || a[i]=='*'||a[i]=='/'){
                string s1 = ans.top(); ans.pop();
                string s2 = ans.top(); ans.pop();
                string s3 = "(" + s1 + a[i]+s2+")";
                ans.push(s3);
            }
            else {
                string z;
                z.push_back(a[i]);
                ans.push(z);
            }
        }
        cout <<ans.top()<<endl;
    }
    return 0;
}