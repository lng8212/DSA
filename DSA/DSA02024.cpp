#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int maxz = max(a.size(),b.size());
    for (int i = 0;i<maxz;i++){
        if(a[i]>b[i]) return 0;
        if(b[i]>a[i]) return 1;
    }
    return a.size()>b.size();
}
int n;
string ax;
int a[20];
vector< string >ans;
void Try(int i){
    for (int j = 0;j<=1;j++){
        a[i]=j;
        if (i==n-1){
            string tmp;
            tmp.clear();
            for(int q = 0;q<n;q++){
                if(a[q]==1) tmp.push_back(ax[q]);
            }
            ans.push_back(tmp);
        }
        else Try(i+1);
    }
}
int main (){


    int t;
    cin >>t;
    while (t--){
        cin >>n;
        cin >>ax;
        ans.clear();
        memset(a,0,sizeof(a));
        Try(0);
        sort(ans.begin()+1,ans.end(),cmp);
        for (int i = 1;i<ans.size();i++){
            cout <<ans[i]<<" ";
        }
        cout <<endl;
    }


    return 0;
}