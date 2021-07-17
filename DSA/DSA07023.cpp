#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin,a);
        stack<char> kq;
        for (int i = a.size()-1;i>=0;i--){
            while (a[i]!=' ' && i>=0){
                kq.push(a[i]);
                i--;
            }
            while (kq.size()>0){
                cout <<kq.top();
                kq.pop();
            }
            cout <<" ";

        }
        cout <<endl;
    }

    return 0;
}