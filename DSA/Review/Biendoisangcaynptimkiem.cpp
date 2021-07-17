#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    Node* left;
    Node* right;
}* Tree;

Tree root;

void Init(Tree &root){
    root = NULL;
}

bool isLeft(Tree root, int val){
    if (root == NULL) return false;
    if (val <root->data) return true;
    return false;
}
bool isRight(Tree root, int val){
    if (root == NULL) return false;
    if (val>root->data) return true;
    return false;
}
Tree Insert(Tree root, int val){
    if (root == NULL){
        root = new Node;
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }
    else {
        if (isLeft(root,val) == true) {
            root->left= Insert(root->left,val);
        }
        if (isRight(root,val) == true){
            root->right = Insert(root->right,val);
        }
    }
    return root;
}
void in (Tree root){
    if (root == NULL) return;
    cout <<root->data<<" ";
    in(root->left);
    in(root->right);
}
void Pro(){
    Init(root);
    int n;
    cin >>n;
    for (int i = 0;i<n;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if (root == NULL) root= Insert(root,u);
        root = Insert(root,v);
    }
    in(root);
    cout <<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        Pro();
    }

    return 0;
}