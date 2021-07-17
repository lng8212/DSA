#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >>n;
    vector<char> a;
    stack<char> ans;
    for (int i=0;i<n;i++){
        char c;
        cin >>c;
         if (ans.size() && ans.top()==c) ans.pop();
         else ans.push(c);
    }
    while (ans.size()){
        a.push_back(ans.top());
        ans.pop();
    }
    for (int i=a.size()-1;i>=0;i--){
         cout <<a[i];
    }
    return 0;
}