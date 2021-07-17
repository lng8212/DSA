#include<bits/stdc++.h>
using namespace std;
vector<int> Tree,a;
int n;
void buildTree(int l, int r, int pos){
    if (l>r) return;
    int mid = (l+r)/2;
    Tree[pos]=a[mid];
    buildTree(l,mid-1,pos*2);
    buildTree(mid+1,r,pos*2+1);
}
void init (){
    Tree.clear();
    Tree.resize(4*n+5,-1);
    a.clear();
    a.resize(n);
}
void in(int node){
    if(Tree[node] ==-1) return;
    in(node*2);
    in(node*2+1);
    cout <<Tree[node]<<" ";
}
void Solve(){
    cin >>n;
    init();
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    buildTree(0,n-1,1);
    in(1);
    cout <<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        Solve();
    }



    return 0;
}