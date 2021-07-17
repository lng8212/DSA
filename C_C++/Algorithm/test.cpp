#include<bits/stdc++.h>
using namespace std;


int main (){

    string a;
    cin >>a;
    map <char,int> ans;
    for (int i = 0;i<a.size();i++){
        ans[a[i]]++;
    }
    vector <string> res;
    for (int i = 0; i<ans.size();i++){
        string tmp= " ";
        tmp = ans[i].first + tmp + ans[i].second;
        res.push_back (tmp);
    }
    for (int i =0 ;i<res.size();i++){
        cout <<res[i]<<endl;
    }


    return 0;
}