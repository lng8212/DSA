#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        vector<int>ans;
        int a[n+1],b[m+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
            ans.push_back(a[i]);
        }
        for (int i=0;i<m;i++){
            cin >>b[i];
            ans.push_back(b[i]);
        }
        sort (ans.begin(),ans.end());
        for (int i=0;i<ans.size();i++){
            cout <<ans[i]<<' ';
        }
        cout <<endl;
      
    }

    return 0;
}