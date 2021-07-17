#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        stack<int> kq;
        kq.push(-1);
        int ansx = 0;
        for (int i = 0 ;i<a.size();i++){
            if (a[i]=='('){
                kq.push(i);
            }
            else {
                if (kq.size()>0) kq.pop();
                if (kq.size()>0) ansx = max (ansx, i-kq.top());
                else kq.push(i); 
            }
        }
        cout <<ansx<<endl;
    }


    return 0;
}