#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        string a;
        cin >>a;
        string b = a;
        int check =0;
        for (int i =0;i<a.size();i++){
            for (int j = i;j<=a.size();j++){
                string ans;
                for (int k = 0;k<a.size();k++){
                    if (a[k]!='z') ans.push_back(a[k]);
                }
               // cout <<ans <<endl;
                if (ans =="2020"){
                    check =1;
                    break;
                }
                a[j]='z';
                
            }
            a=b;

        }
        if (check == 1) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }
   
    return 0;
}