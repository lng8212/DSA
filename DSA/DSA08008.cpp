#include<bits/stdc++.h>
using namespace std;

long long  stringToNum(string a, int n){
    long long s =0 ;
    for (int i = 0;i<a.size();i++){
        s=(s*10+(a[i]-'0'))%n;
    }
    return s;
}
long long n;
string process(){
    queue <string> ans;
    ans.push("1");
    while (ans.size()>0){
        string x = ans.front();
        ans.pop();
        if (stringToNum(x,n)==0) return x;
        ans.push(x+"0");
        ans.push(x+"1");
    }
}

int main (){
    int t;
    cin>>t;
    while (t--){
        cin >>n;
        cout <<process()<<endl;
       
    }


    return 0;
}