#include<bits/stdc++.h>
using namespace std;

vector<int> Tree, a;
int n;
void buildTree(int l, int r, int node){
    if (l>r) return;
    int mid = (l+r)/2;
    Tree[node] = a[mid];
    buildTree(l,mid-1,node*2);
    buildTree(mid+1,r,node*2+1);
}

void init(){
    Tree.clear();
    Tree.resize(4*n+5,-1);
    a.clear();
    a.resize(n);
}
void Show(int node){
    if(Tree[node]==-1) return;
    cout <<Tree[node]<<" ";
    Show(node*2);
    Show(node*2+1);
}
void solve(){
    cin >>n;
    init();
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    buildTree(0,n-1,1);
    Show(1);
    cout <<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        solve();
    }


    return 0;
}