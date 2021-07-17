#include<bits/stdc++.h>
using namespace std;
int n;
vector <string> ans;
int b[10007]={0};
string a;
void sinh (int i){
    
    for (int j=0;j<=1;j++){
        b[i]=j;
        if (i==n) {
            string tmp;
            for (int k=0;k<n;k++){
                if (b[k]!=0) {
                    tmp+=a[k];
                }
            }
            if (tmp.size()!=0) ans.push_back(tmp);
        }
        else sinh(i+1);
    }   

}
int main (){
    int T;
    cin >>T;
    while (T--){
        cin >>n;
        cin >>a;
        sinh (0);
        sort (ans.begin(),ans.end());
        for (int i=0;i<ans.size();i+=2){
            cout <<ans[i]<<' '; 
        }
        ans.clear();
        cout <<endl;
    }

}