#include<bits/stdc++.h>
using namespace std;

bool unused[10000];
vector< vector<int> > a;
void DFS(int i){
    cout <<i<<" ";
    unused[i]=1;
    for (int z =0;z<a[i].size();z++){
        if (unused[a[i][z]]==0) DFS(a[i][z]);
    }
}

int main (){

    int t;
    cin >>t;
    while (t--){
        memset(unused,0,sizeof(unused));
        int v, e,u;
        cin >>v>>e>>u;
        a.clear();
        a.resize(10000);
        for (int i = 1;i<=e;i++){
            int d,k;
            cin >>d>>k;
            a[d].push_back(k);
            a[k].push_back(d);
        }
        DFS(u);
        cout <<endl;

    }



    return 0;
}