#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+3][m+3];
        for (int i = 1;i<=n;i++){
            for (int j =1;j<=m;j++){
                cin >>a[i][j];
            }
        }
        vector<int> ans;

        ans.resize(0);
        int z=1, l=n, r=m;
        while (ans.size()<(n*m)){
            for (int i = z;i<=r;i++){
                ans.push_back(a[z][i]);
                // cout <<a[z][i]<<" ";
            }
            for (int i =z+1;i<=l;i++){
                ans.push_back(a[i][r]);
                // cout <<a[i][r]<<" ";
            }
            for (int i = r-1;i>=z&& ans.size()<m*n;i--){
                ans.push_back(a[l][i]);
                // cout <<a[l][i]<<" ";
            }
            for (int i = l-1;i>z && ans.size()<m*n;i--){
                ans.push_back(a[i][z]);
                // cout <<a[i][z]<<" ";
            }
            z++;l--;r--;
        }
        for (int i = ans.size()-1;i>=0;i--){
            cout <<ans[i]<<' ';
        }
        cout <<endl;

    }



    return 0;
}