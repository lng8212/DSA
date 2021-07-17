#include<bits/stdc++.h>

using namespace std;

vector<int> Tree, a;
int n,s;
void buildTree(int l, int r, int node)
{
    if (l>r) return;
    int mid = (r+l)/2;
    Tree[node] = a[mid]; 
    buildTree(l, mid-1, node*2);
    buildTree(mid+1, r, node*2+1);
}

void init()
{
    s=0;
    Tree.clear();
    Tree.resize(4*n+5, -1);
    a.clear();
    a.resize(n);
}
void showPreOrder(int node)
{
    if (Tree[node] == -1) return;
    if (Tree[node*2]== -1 && Tree[node*2+1]==-1) s++;
    showPreOrder(node*2);
    showPreOrder(node*2 + 1);
    
}
void solve()
{
    cin >> n;
    init();
    for(int i = 0;i<a.size();i++) cin >> a[i];
    sort(a.begin(), a.end());
    buildTree(0, n-1, 1);
    showPreOrder(1);
    cout <<s;
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}