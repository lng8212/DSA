#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n;
        vector<int> ans;
        for (int i = 0;i<m;i++){
            int z;
            cin >>z;
            ans.push_back(z);
        }
        for (int j = 0;j<n;j++){
            int z;
            cin >>z;
            ans.push_back(z);
        }
        

        sort(ans.begin(),ans.end());
        for (int i = 0;i<ans.size();i++){
            cout <<ans[i]<<" ";
        }
        cout <<endl;

    }


    return 0;
}