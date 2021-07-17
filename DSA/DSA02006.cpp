#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
bool check[1000];
vector<vector<int> > ans;
void Try(int i, vector<int> z, int s) {
    if (s>k) return;
    if (s==k) {
        ans.push_back(z);
        return;
    }
    for (int j = i;j<=n;j++){
        if (s+a[j]<=k && check[a[j]]==0) {
            check[a[j]]=1;
            z.push_back(a[j]);
            Try(j,z,s+a[j]);
            check[a[j]]=0;
            z.pop_back();
        }
    }
    
}
int main (){

    int t;
    cin >>t;
    while (t--){
        ans.clear();
        memset(check,0,sizeof(check));
        cin >>n>>k;
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        sort (a+1,a+n+1);
        vector<int>tmp;
        tmp.clear();
        Try(1,tmp,0);
        if (ans.size()==0 ){
            cout <<"-1"<<endl;
            continue;
        }
        for (int i = 0;i<ans.size();i++){
            cout <<"[";
            for (int j =0;j<ans[i].size();j++){
                if (j<ans[i].size()-1) cout <<ans[i][j]<<" ";
                else cout <<ans[i][j];
            }
            cout <<"] " ;
        }
        cout <<endl;
    }

    return 0;
}