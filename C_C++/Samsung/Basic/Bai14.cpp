#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
     cin >>T;
     while (T--){
         int n;
         cin >>n;
         priority_queue<long long, vector<long long>,greater<long long> > ans;
       
         for (int i=0;i<n;i++){
             long long z;
             cin >>z;
             ans.push(z);
         }
         long long S=0;
         while (ans.size()>1){
             long long k= ans.top();
             ans.pop();
             long long t = ans.top();
             ans.pop();
             S=S+k+t;
             ans.push(k+t);
         }
         cout <<S<<endl;

     }

    return 0;
}