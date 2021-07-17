#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a, b;
        getline (cin,a);
        getline(cin,b);
        vector<string> a1;
        vector<string> b1;
        for (int i = 0;i<a.size();i++){
            string tmp ;
            while (a[i]!=' ' && i<a.size()){
                tmp.push_back (a[i]);
                i++;
            }
            a1.push_back(tmp);
        }
        for (int i = 0;i<b.size();i++){
            string tmp ; 
            while (b[i]!=' ' && i<b.size()){
                tmp.push_back (b[i]);
                i++;
            }
            b1.push_back (tmp);
        }
        vector <string >ans;
        for (int i =0;i<a1.size();i++){
            int check = 0;
            for (int j = 0 ;j<b1.size();j++){
                if (a1[i]==b1[j]) check = 1;
            }
            if (check == 0) {
                ans.push_back(a1[i]);
                for (int k = i+1;k<a1.size();k++){
                    if (a1[k] == a1[i]) a1.erase(a1.begin()+k);
                }
            }
        }
        sort(ans.begin(),ans.end());
        for (int i = 0;i<ans.size();i++){
            cout <<ans[i]<<' ';
        }
        cout <<endl;
    }




    return 0;
}