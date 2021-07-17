#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];
int x[100];
int s;
vector<vector<int> > ans; 
void Try (int i){
    if (s==k){
        vector<int>tmp;
        for (int z = 1;z<i;z++){
            tmp.push_back(a[x[z]]);
        }
        ans.push_back(tmp);
    }
    for (int j = x[i-1]+1;j<=n;j++){
      x[i]=j;
      s+=a[j];
      if (s<=k){
          Try(i+1);
      }
      s-=a[j];
    }
}
int main (){
    x[0]=0;
    cin >>n>>k;
    for (int i = 1;i<=n;i++){
        cin >> a[i];
    }
    Try(1);
    for (int i = ans.size()-1;i>=0;i--){
        for (int j = 0;j<ans[i].size();j++){
            cout <<ans[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<ans.size();
    return 0;
}