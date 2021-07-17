#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<int> c;
        c.push(-1);
        int maxz = 0;
        for (int i = 0;i<a.size();i++){
            if (a[i]=='('){
                c.push(i);
            }
            else {
                if (!c.empty()) c.pop();
                if (!c.empty())  maxz = max (maxz, i-c.top());
                else c.push(i);
               
            }
        }
        cout <<maxz<<endl;

    }


    return 0;
}