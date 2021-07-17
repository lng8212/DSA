#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool cmp(string a, string b){
    if(a.size()==b.size()) return a>=b;
    return a.size()>=b.size();
}

string sub(string a, string b){
    while(a.size()<b.size()) a = "0"+a;
    while(b.size()<a.size()) b= "0"+b;
    int borrow = 0;
    if(a<b) swap(a,b);
    string res = "";
    for(int i=a.size()-1;i>=0;i--){
        int tmp = (a[i]-48)-(b[i]-48)-borrow;
        if(tmp<0){
            borrow=1;
            tmp+=10;
        }
        else borrow =0;
        res= (char)(tmp%10+48) +res;
    }
    while(res[0]=='0'&&res.size()) res.erase(0,1);
    return res;
}

bool isNull(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!='0') return false;
    }
    return true;
}

string div(string a, string b){
    string res="",tmp="";
    for(int i=0;i<a.size();i++){
        tmp+=a[i];
        char dem='0';
        while(cmp(tmp, b)){
            tmp = sub(tmp,b);
            dem++;
        }
        if(isNull(tmp)) tmp="";
        res+=dem;
    }
    while(res[0]=='0'&&res.size()) res.erase(0,1);
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        if(cmp(a,b)==false) cout<<"0"<<endl;
        else cout<<div(a,b)<<endl;
    }
    return 0;
}