#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void process(){
    queue<string>a;
    a.push("9");
    for (int i = 0;i<100000;i++){
        string s1 = a.front();
        a.pop();
        ans.push_back(s1);
        string s2 = s1;
        a.push(s1+"0");
        a.push(s2+"9");
    }
}
long long stringToNum(string a){
    long long s=0;
    for (int i = 0;i<a.size();i++){
        s=s*10 + (a[i]-'0');
    }
    return s;
}
int main (){

    int t;
    cin >>t;
    process();
    while (t--){
        int n;
        cin >>n;
        for (int i= 0;i<ans.size();i++){
            if (stringToNum(ans[i])%n==0){
                cout <<ans[i]<<endl;
                break;
            }
        }
    }

    return 0;
}