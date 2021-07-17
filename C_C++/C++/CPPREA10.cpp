#include<bits/stdc++.h>
using namespace std;
vector<int> a;

int main (){
    
    int t;
    cin >>t;
    
    while (t--){
        string a;
        cin >>a;
        int num = 1;
        vector<int> ans;
        ans.push_back(1);
        int de = 0;
        for (int i = 0 ; i< a.size();i++){
            if (a[i]=='I'){
                de  = 0;
                ans.push_back(++num);
            }
            if (a[i]=='D'){
                ans.insert(ans.begin()+i-de,++num);
                de++;
            }
        }
        for (int i = 0;i<ans.size();i++){
            cout <<ans[i];
        }
        cout <<endl;
    }

    return 0;
}