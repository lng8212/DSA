#include<bits/stdc++.h>
using namespace std;
vector<string> a;
int n,stop=0;
char b[100007];
int c[100007]={};
string tmp;
bool checkz(string a){
    stack<char> check;
    for (int i=0;i<a.size();i++){
        if (a[i]=='(') check.push(a[i]);
        if (a[i]==')') {
           if (check.size()&& check.top()=='(')
            check.pop();
            else check.push(a[i]);
        }  
    }
    if (check.size()==0) return 1;
    return 0;
}
void sinh (){
    int i=n-1;
    while (i>=0 && c[i]==1) {
        c[i]=0;
        i--;
    }  
    if (i==-1) stop =1;
    else c[i]=1;
}
void ct(){
    while (stop==0){
        for (int i=0;i<n;i++){
            b[i]=c[i]+40;
            tmp.push_back(b[i]);
        }

        a.push_back(tmp);
        tmp.resize(0,0);
        sinh();
    }

}
int main (){
    cin >>n;
    int S=0;
    ct();
    for (int i=0;i<a.size();i++){
        if (checkz(a[i])==1) {
             cout <<a[i]<<endl;
            S++;
        }

    }
    cout <<S;
    return 0;
}