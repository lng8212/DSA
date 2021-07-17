#include<bits/stdc++.h>
using namespace std;

int main (){
    queue<int> a;
    while (1){
        string t;
        cin >>t;
        if (t=="END.") break;
        if (t=="1"){
            int n;
            cin >>n;
            a.push(n);
            cout <<"NEW"<<endl;
        }
        if (t=="2"){
            while (a.size()){
                cout <<a.front()<<' ';
                a.pop();
            }
            cout <<endl;

        }
    }
}