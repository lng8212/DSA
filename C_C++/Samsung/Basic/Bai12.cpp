#include<bits/stdc++.h>
using namespace std;
vector <vector<int> > ans;
int n,k;
int a[200];
void bT (int i, int sum ,vector <int > kq){
        if (sum >k) return;
        if (sum == k) {
            ans. push_back (kq);
            return ;
        }
        for (int j=i;j<=n;j++){
            if (sum + a[j]<=k){
                kq.push_back (a[j]);
                bT(j,sum+a[j],kq);
                kq.pop_back();
 
            }
        }
 
}
int main (){
    ios_base::sync_with_stdio;
    cin.tie(0);
    int T;
    cin >>T;
    while (T--){
 
        cin >>n>>k;
 
        for (int i=1;i<=n;i++){
            cin >>a[i];
        }
        sort (a+1,a+n+1);
        vector<int> kq;
        kq.clear();
        ans.clear();
        bT(1,0,kq);
        if (ans.size()==0) {
            cout <<"-1"<<endl;
        }
        else{
            for (int i=0;i<ans.size();i++){
                cout <<"[";
                for (int j=0;j<ans[i].size()-1;j++){
                    cout <<ans[i][j]<<' ';
                }
                cout <<ans[i][ans[i].size()-1];
                cout <<"]";
            }
            cout <<endl;
        } 
    }
    return 0;
}