#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        long long n;
        cin >>n;
        string a;
        cin >>a;
        priority_queue<long long>ans;
        long long b[300]={0};
        for (long long i = 0;i<a.size();i++){
            b[a[i]]++;
        }
        for (long long i = 0;i<300;i++){
            if (b[i]>0) ans.push(b[i]);
        }
        while (ans.top()>0 && n>0){
            long long k = ans.top();
            ans.pop();
            k--;
            n--;
            ans.push(k);
        }
        long long kq = 0;
        while (ans.size()>0){
            long long z = ans.top();
            kq+=(z*z);
            ans.pop();
        }
        cout <<kq<<endl;

    }

    return 0;
}