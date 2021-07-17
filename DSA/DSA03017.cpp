#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        string a;
        cin >>a;
        priority_queue<int>ans;
        int b[300]={0};
        for (int i = 0;i<a.size();i++){
            b[a[i]]++;
        }
        long long s;
        for (int i = 0;i<300;i++){
            if (b[i]>0) ans.push(b[i]);
        }
        while (ans.top()>0 && n>0){
            int k = ans.top();
            ans.pop();
            k--;
            n--;
            ans.push(k);
        }
        long long kq = 0;
        while (ans.size()>0){
            int z = ans.top();
            kq+=(z*z);
            ans.pop();
        }
        cout <<kq<<endl;

    }

    return 0;
}