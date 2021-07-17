#include<bits/stdc++.h>
using namespace std;
vector<long long > a[100007];
bool check[100007];
long long S=0;
void DFS(int n){
    check[n]=true;
    for (int i=0;i<a[n].size();i++){
        int x=a[n][i];
        if (check[x]==false){
            check[x]=true;
            DFS(x);
        }
    }
}
int main(){
    long long V,E;
    cin >>V>>E;
    for (int i=1;i<=E;i++){
        long long u,v;
        cin >>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i=1;i<=V;i++){
        if (check[i]==false){
            S++;
            DFS(i);
        }
    }
    cout <<S;
    return 0;
}