#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node* tmp = new node();
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
bool isLeaf(node* node){
    if (node == NULL) return false;
    if (node->left == NULL && node->right==NULL) return true;
    return false;
}
int sumLeaf(node* root){
    int ans = 0;
    if (root!=NULL){
        if (isLeaf(root->left)==true) ans += root->left->data;

        else ans+=sumLeaf(root->left);
        ans += sumLeaf(root->right);
    
    }
    return ans;
}
void Run(){
    int n;
    cin >>n;
    node *root = NULL;
    map<int,node*> dd;
    for (int i = 0;i<n;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if (dd.find(u)==dd.end()){
            node* tmp = newNode(u);
            dd[u]=tmp;
            if (root == NULL) root = tmp;
        }
        node* Node = dd[u];
        node* ans = newNode(v);
        if (x=='L') Node->left=ans;
        else Node->right=ans;
        dd[v]=ans;
    }
    cout <<sumLeaf(root)<<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--) Run();


    return 0;
}