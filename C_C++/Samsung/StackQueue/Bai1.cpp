#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        string a;
        cin >>a;
        stack <char> check ;
        for (int i=0;i<a.size();i++){
            if (a[i]=='(') check.push(a[i]);
            if (a[i]==')'){
                if (check.size()!=0 && check.top()=='('){
                    check.pop();
                }
                else check.push(a[i]);
            }
        }
        int d1=0,d2=0;
        while (check.size()){
            if (check.top()=='(') d1++;
            else d2++;
            check.pop();
         }
         int sum = d1/2+d2/2+d1%2+d2%2;
         cout <<sum<<endl;


       
    }

    return 0;
}