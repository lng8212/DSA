#include<bits/stdc++.h>
using namespace std;
int a[100][100];
bool check =false;
vector<string >ans;
int n;
void solve (int i, int j,string s ){
    if (i==1 && j==1 && a[i][j]==0) {
        check = false;
        return;                                                         
    }
    if (i==n && j == n && a[n][n]==1) {
        ans.push_back(s);
        check = true;   
        return;
    }
    if ( i <n && a[i+1][j]==1 ){
      
        solve(i+1,j,s+"D");
       
    }
    if (j<n && a[i][j+1]==1 ){
        
        solve (i,j+1,s+"R");
        
    } 

}
int main (){
    int T;
    cin>>T;
    while (T--){
        cin >>n;
         for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                 cin >>a[i][j];
           }
        }
        check = false;
           ans.clear();
           solve (1,1,"");
        if (check == false) cout <<-1;
        else {
            sort (ans.begin(),ans.end());
            for (int i =0;i< ans.size ();i++){
                cout <<ans[i]<<' ';
            }
        }
        cout <<endl;
    }
    return 0;
}