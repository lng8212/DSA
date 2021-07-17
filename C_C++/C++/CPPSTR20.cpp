#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a;
        getline (cin,a);
        vector<string> ans;
        for (int i=0;i<a.size();i++){
            string tmp;
            while (a[i]!=' ' && i<a.size()){
                tmp.push_back(a[i]);
                i++;
            }
            ans.push_back(tmp);
        }
        for (int i=ans.size()-1;i>=0;i--){
            cout <<ans[i]<<' ';
        }
        cout <<endl;
    }

    return 0;
}