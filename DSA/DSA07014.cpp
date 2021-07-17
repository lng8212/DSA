#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<long long> ans;
        for (int i  = a.size()-1;i>=0;i--){
            if (a[i]=='+'|| a[i]=='-' || a[i]=='*'||a[i]=='/'){
                long long s1 = ans.top(); ans.pop();
                long long s2 = ans.top(); ans.pop();
                long long tmp;
                if (a[i]=='+') {
                    tmp = s1+s2;
                }
                else if (a[i]=='-') {
                    tmp = s1-s2;
                }
                else if (a[i]=='*') {
                    tmp = s1*s2;
                }
                else if (a[i]=='/') {
                    tmp = s1/s2;
                }
                ans.push(tmp);
            }
            else {
                ans.push((long long )(a[i]-'0'));
            }
        }
        cout <<ans.top()<<endl;
    }


    return 0;
}