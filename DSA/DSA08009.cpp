#include<bits/stdc++.h>
using namespace std;

struct data{
    int value;
    int index;
};

int main (){

    int t;
    cin >>t;
    while (t--){
       int s,t;
       cin >>s>>t;
       queue<data> ans;
       ans.push({s,0});
       set<int> sv;
       sv.insert(s);
       while (ans.size()>0){
           data zz = ans.front();
           ans.pop();
           if (zz.value==t) {
               cout <<zz.index;
               break;
           }
           if (zz.value*2==t || zz.value-1 == t) {
               cout <<zz.index+1;
               break;
           }
           if (sv.find(zz.value*2)==sv.end() && zz.value<t){
               ans.push({zz.value*2,zz.index+1});
               sv.insert(zz.value*2);
           }
           if (sv.find(zz.value-1)==sv.end() && zz.value>0){
               ans.push({zz.value-1,zz.index+1});
               sv.insert(zz.value-1);
           }
       }
       cout <<endl;


    }


    return 0;
}