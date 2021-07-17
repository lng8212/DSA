#include<bits/stdc++.h>
using namespace std;

long long m = 1e9+7;
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
           long long k1 = (ans.top())%m;
           ans.pop();
           long long k2 = (ans.top())%m;
           ans.pop();
           kq= kq+k1+k2;
           kq=kq%m;
           ans.push((k1+k2)%m);
       }
       cout <<kq<<endl;
    }

    return 0;
}