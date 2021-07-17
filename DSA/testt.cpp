#include<bits/stdc++.h>
using namespace std;
struct z{
    int a,b,c;
};
bool cmp (z e, z f){
    if(e.a>f.a) return true;

}
int main (){
    z x;
    z y;
    vector<z> ans;
    ans.push_back(x);
    ans.push_back(y);
    sort(ans.begin(),ans.end(),cmp);

}