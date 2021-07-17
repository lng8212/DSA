#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<long long> ans;
        for (int i  = 0;i<a.size();i++){
            if (a[i]=='+'|| a[i]=='-' || a[i]=='*'||a[i]=='/' || a[i]=='^' || a[i]=='%'){
                long long s2 = ans.top(); ans.pop();
                long long s1 = ans.top(); ans.pop();
                long long tmp;
                // cout <<stringToNum(s1)<<" "<<stringToNum(s2)<<endl;
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
                // else if (a[i]=='^') {
                //     long long q = stringToNum(s1) ^ stringToNum(s2);
                //     ans.push(numtoString(q));
                // }
                // else if (a[i]=='%') {
                //     long long q = stringToNum(s1) % stringToNum(s2);
                //     ans.push(numtoString(q));
                // }
            }
            else {
                ans.push((long long )(a[i]-'0'));
            }
        }
        cout <<ans.top()<<endl;
    }


    return 0;
}