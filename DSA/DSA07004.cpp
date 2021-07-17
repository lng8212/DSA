#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<char> zz;
        for (int i = 0;i<a.size();i++){
            if (a[i]=='(') zz.push(a[i]);
            else {
               if (zz.size()>0 ){
                   if (zz.top()=='(')  zz.pop();
                   else zz.push(a[i]);
               }
               else zz.push(a[i]);
            }
        }
        int left =0, right = 0;
        while (zz.size()>0){
            if (zz.top()=='(') left++;
            else right ++;
            zz.pop();
        }
        cout <<left/2 + right/2 + left%2 + right %2<<endl;
    }

}