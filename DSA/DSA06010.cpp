#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<string> a;
        a.clear();
        for (int i = 0;i<n;i++){
            string tmp;
            cin >>tmp;
            a.push_back(tmp);
        }
        int zz[300]={0};
        for (int i = 0;i<a.size();i++){
            string tmp = a[i];
            for (int j =0 ;j<tmp.size();j++){
                if (zz[tmp[j]]==0) zz[tmp[j]]=1;
            }
        }
        vector<int> ans;
        ans.clear();
        for (int i = 0;i<300;i++){
            if (zz[i]==1) ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        for (int i = 0;i<ans.size();i++){
            cout <<(char)ans[i]<<" ";
        }
        cout <<endl;
    }


    return 0;
}