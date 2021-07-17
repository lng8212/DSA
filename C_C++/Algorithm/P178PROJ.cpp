#include<bits/stdc++.h>
using namespace std;
struct cmd{
    bool operator () (long long a, long long b){
        return a>b;
    }
};
int main (){
    priority_queue<long long ,vector<long long > ,cmd> q;
    int n;
    cin >>n;
    long long ans=0;
    long long mod =1e9+7;
    for (int i=0;i<n;i++){
        long long x;
         cin >>x;
         q.push(x);
    }
    while (q.size()>1){
         long long top1=q.top();
         q.pop();
         long long top2 =q.top();
         q.pop();
         long long sum =(top1 +top2) %mod;
         ans=ans+sum;
         q.push(sum);
    }
    cout <<ans%mod;
    return 0;
}