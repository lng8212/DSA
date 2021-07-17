#include<bits/stdc++.h>
using namespace std;
vector <string> ans ;
int n;
int a[100][100];
bool vs[100][100];
void vst (){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            vs[i][j]=false;
        }
    }
}
void Try (int i, int j, string s){
    if (i==n && j==n){
        ans.push_back(s);
        return;
        
    }
    if ( a[1][1]==0 || a[n][n]==0){
        return;
    }
    if (i<1 || j<1||i>n || j>n) return;
    if (a[i+1][j]==1 && vs[i+1][j]==false){
        vs[i][j]=true;
        Try (i+1,j,s+"D");
        vs[i][j]=false;
    }
     if (a[i][j+1]==1 && vs[i][j+1]==false){
        vs[i][j]=true;
        Try(i,j+1,s+"R");
        vs[i][j]=false;
    }
    if (a[i][j-1]==1 && vs[i][j-1]==false){
        vs[i][j]=true;
        Try (i,j-1, s+"L");
        vs[i][j]=false;
    }
   
    if (a[i-1][j]==1 && vs[i-1][j]==false){
        vs[i][j]=true;
        Try (i-1,j,s+"U");
        vs[i][j]=false;
    }
}

int main (){
    int T;
    cin >>T;
    while (T--){
        ans.clear();
        cin >>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                cin >>a[i][j];
            }
        }
        vst ();
        Try(1,1,"");
        if (ans.size()==0) cout <<"-1";
        else {
            sort (ans.begin(),ans.end());
            for (int i=0;i<ans.size();i++){
                cout <<ans[i]<<' ';
            }
        }
        cout <<endl;
    }

    return 0;
}