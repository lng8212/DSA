#include<bits/stdc++.h>
using namespace std;

int n,s;
vector<int> Tree,a;
void buildTree(int l, int r, int pos){
    if (l>r) return;
    int mid = (l+r)/2;
    Tree[pos] = a[mid];
    buildTree(l,mid-1,pos*2);
    buildTree(mid+1,r,pos*2+1);
}

void init (){
    s=0;
    Tree.clear();
    Tree.resize(4*n+5,-1);
    a.clear();
    a.resize(n);
}

void isLeaf(int pos){
    if(Tree[pos] == -1) return;
    if (Tree[pos*2] == -1 && Tree[pos*2+1]==-1)  s++;
    isLeaf(pos*2);
    isLeaf(pos*2+1);
}
void solve(){
    cin >>n;
    init();
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
   
    buildTree(0,n-1,1);
    isLeaf(1);
    cout <<s<<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        solve();
    }


    return 0;
}