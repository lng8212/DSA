#include<bits/stdc++.h>
using namespace std;
int v,e,bd;
bool unused[1005];
vector<vector<int> > a;
void init (){
    cin >>v>>e>>bd;
    a.clear();
    a.resize(v+1);
    for (int i = 0;i<1004;i++){
        unused[i]=false;
    }
    for (int i = 0;i<e;i++){
        int x,y;
        cin >>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void DFS(int bd){
    cout <<bd<<" ";
    unused[bd]=true;
    for (int i = 0;i<a[bd].size();i++){
        if (unused[a[bd][i]]==false){
            DFS(a[bd][i]);
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        init();
        DFS(bd);
        cout <<endl;
    }



    return 0;
}