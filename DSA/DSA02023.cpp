#include<bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
vector<string >ans;
void Try(int i, int j, string s){

    if (i==1 && j==1 && a[i][j]==0) return;
    if (i==n && j==n && a[i][j]==1) {
        ans.push_back(s);
        return;
    }
   
    if (i+1<=n && a[i+1][j]==1) Try(i+1,j,s+"D");
    if (j+1<=n&&a[i][j+1]==1) Try(i,j+1,s+"R");
}
int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n;
        ans.clear();
        for (int i =1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                cin >>a[i][j];
            }
        }
        Try(1,1,"");
        if (ans.size()==0) {
            cout <<"-1"<<endl;
            continue;
        }
        sort(ans.begin(),ans.end());
        for (int i =0;i<ans.size();i++){
           cout <<ans[i]<<" ";
        }
        cout <<endl;

    }

    return 0;
}