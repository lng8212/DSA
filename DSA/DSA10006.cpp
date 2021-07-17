#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > a;
bool unused[1005];
int check;
int v,e,u;
vector<int> ans;
void init(){
    cin >>v>>e>>u;
    check =0;
    a.clear();
    ans.clear();
    a.resize(1005);
    for (int i = 1;i<=e;i++){
        int x,y;
        cin >>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 0;i<1004;i++){
        unused[i]=true;
    }
}

void DFS(int u){
    unused[u]=false;
    for (int i = 0;i<a[u].size();i++){
        if (unused[a[u][i]]==true){
            check++;
            ans.push_back(u);
            ans.push_back(a[u][i]);
            
            DFS(a[u][i]);
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        DFS(u);
        if (check <v-1) cout <<"-1";
        else {
            for (int i = 0;i<ans.size();i+=2){
                cout <<ans[i]<<" "<<ans[i+1]<<endl;
            }
        }
        cout <<endl;
    }   


    return 0;
}