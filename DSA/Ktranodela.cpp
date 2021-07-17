#include<bits/stdc++.h>
using namespace std;
 
struct node{
    int data;
    node* left;
    node* right;
};
 
node* newNode(int data)
{
    node* tmp = new node();
    tmp -> data = data;
    tmp -> left = tmp -> right = NULL;
    return tmp;
};
 
bool checkUtil(node* root, int level, int *leafLevel){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL){
        if(*leafLevel == 0){
            *leafLevel = level;
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level + 1, leafLevel) &&
            checkUtil(root->right, level + 1, leafLevel);
}
 
bool check(node* root){
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}
 
 
void Run()
{
    int n;
    cin>>n;
    node *root = NULL;
    map<int, node*> dd;
    for(int i=0; i<n; i++){
        int u, v; char x;
        cin>>u>>v>>x;
 
        if(dd.find(u) == dd.end()){
            node* tmp = newNode(u);
            dd[u] = tmp;
            if(root == NULL) root = tmp;
        }
 
        node* Node = dd[u];
        node* ans = newNode(v);
        if(x == 'L') Node->left = ans;
        else Node->right = ans;
        dd[v] = ans;
    }
    if(check(root)) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}