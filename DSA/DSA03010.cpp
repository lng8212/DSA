#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        priority_queue<long long, vector<long long> , greater<long long> > ans;

        for (int i = 1;i<=n;i++){
            long long z;
            cin >>z;
            ans.push(z);
        }
        long long kq = 0;
       while (ans.size()>=2){
           long long k1 = ans.top();
           ans.pop();
           long long k2 = ans.top();
           ans.pop();
           kq= kq+ k1 +k2;
           ans.push(k1+k2);
       }
       cout <<kq<<endl;
    }


    return 0;
}