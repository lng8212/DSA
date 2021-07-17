#include<bits/stdc++.h>
using namespace std;
int n;
 vector<string> t;
void process(){
   
    queue<string> q;
    q.push("6");
    q.push("8");
    while (q.front().size()<=n){
        string xx = q.front();
        q.pop();
        if (xx.size()>n) {
            return ;
        }
        t.push_back(xx);
        q.push(xx+"6");
        q.push(xx+"8");
    }
}
int main (){

    int T;
    cin >>T;
    while (T--){
        t.clear();
        cin >>n;
        process();
        cout <<t.size()<<endl;
        for (int i = t.size()-1;i>=0;i--){
            cout <<t[i]<<" ";
        }
        cout <<endl;
    }


    return 0;
}