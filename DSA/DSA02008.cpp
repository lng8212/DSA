#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[20][20];
int x[20];
bool unused[20];
void reset(){
    for (int i = 0;i<20;i++){
        unused[i]= false;
    }
}
vector<vector<int> > ans;
void Try (int i){
    for (int j = 1;j<=n;j++){
        if (unused[j]==false){
            unused[j]=true;
            x[i]=j;
            if (i==n){
                int s=0;
                for (int z = 1;z<=n;z++){
                    s+=a[z][x[z]];
                }
                if (s==k){
                    vector<int > t;
                    for (int z = 1;z<=n;z++){
                        t.push_back(x[z]);
                    }
                    ans.push_back(t);
                }
            }
            else Try(i+1);
            unused[j]=false;
        }
    }
}
int main (){

        reset();
        cin >>n>>k;
        for (int i=1;i<=n;i++){
            for (int j =1;j<=n;j++){
                cin >>a[i][j];
            }
        }
        Try(1);
        cout <<ans.size()<<endl;
        for (int i = 0;i<ans.size();i++){
            for (int j = 0;j<ans[i].size();j++){
                cout <<ans[i][j]<<" ";
            }
            cout <<endl;
        }   


    return 0;
}