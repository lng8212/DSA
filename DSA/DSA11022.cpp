#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int infor;
    Node* left;
    Node* right;
}* Tree;

Tree root;
void Init(Tree &root){
    root = NULL;
}
bool isLeft(int val, Tree root){
    if (val<root->infor) return true;
    return false;
}
bool isRight(int val, Tree root){
    if (val>root->infor) return true;
    return false;
}
bool isLeaf(Tree root){
    if (root->left==NULL && root->right == NULL) return true;
    return false;
}
Tree Insert(int val, Tree root ){
    if (root == NULL) {
        root = new Node;
        root->infor = val;
        root->left=NULL;
        root->right = NULL;
        return root;
    }
    if (isLeft(val,root)==true){
        root->left = Insert(val,root->left);
    }
    else if (isRight(val,root)==true){
        root->right = Insert(val,root->right);
    }
    return root;
}
void Show(Tree root){
    if (root == NULL) return;
    Show(root->left);
    if (isLeaf(root)==true) cout <<root->infor<<" ";
    Show(root ->right);
    
    
}
void solve(){
    Init(root);
    int n;
    cin >>n;   
    for(int i = 0;i<n;i++){
        int x;
        cin >>x;
        root = Insert(x,root);
    }
    Show(root);
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