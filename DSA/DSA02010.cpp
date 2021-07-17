#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[200];
vector< vector<int > > ans;
void Try (int i, int sum, vector<int > tmp){
    if (sum == k) {
        ans.push_back(tmp);
        return;
    }
    if (sum >k) {
        return;
    }
    for (int j = i;j<=n;j++){
        if (sum + a[j]<=k){
            tmp.push_back(a[j]);
            Try(j,sum+a[j],tmp);
            tmp.pop_back();
        }
    }
   
    
}
int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n>>k;
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        sort(a+1,a+n+1);
        vector<int> z;
        z.clear();
        ans.clear();
        Try(1,0,z);
        if (ans.size()==0) cout <<-1;
        else {
            for (int i = 0;i<ans.size();i++){
                cout <<"[";
                for (int j = 0;j<ans[i].size()-1;j++){
                    cout <<ans[i][j]<<" ";
                }
                cout <<ans[i][ans[i].size()-1]<<"]";
            }
        }
        cout <<endl;
       
    }


    return 0;
}