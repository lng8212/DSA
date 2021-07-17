#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
bool check (){
    for (int i =1,j=n;i<=j;){
        if (a[i]!=a[j]) {
            return 0;
        }
        else {
            i++;j--;
        }
    }
    return 1;
}
vector< vector<int> > ans;
void Try (int i ){
    for (int j =0;j<=1;j++){
        a[i]=j;
        if (i==n){
            vector<int> tmp;
            if(check()==1){
                for (int z =1;z<=n;z++){
                    tmp.push_back(a[z]);
                }
                ans.push_back(tmp);
            }
        }
        else Try (i+1);
    }
}

int main (){

    cin >>n;
    Try(1);
    // cout <<ans.size()<<endl;
    for (int i = 0;i<ans.size();i++){
        for (int j = 0;j<ans[i].size();j++){
            cout <<ans[i][j]<<" ";
        }
        cout <<endl;
    }


    return 0;
}