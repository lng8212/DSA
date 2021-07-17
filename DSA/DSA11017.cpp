#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int infor;
    Node* left;
    Node* right;
} * Tree;

Tree root;

void Init(Tree &root){
    root = NULL;
}
bool isLeft(int val, Tree root){
    if (val < root->infor) return true;
    return false;
}
bool isRight(int val, Tree root){
    if (val > root->infor) return true;
    return false;
}
Tree Insert(Tree root, int val){
    if (root == NULL){
        root = new Node;
        root->infor = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (isLeft(val,root)==true){
        root-> left = Insert(root->left,val);
    }
    else if (isRight(val,root)==true){
        root->right = Insert(root->right,val);
    }
    return root;
}
void Show(Tree root){
    if (root == NULL) return;
    Show(root->left);
    Show(root->right);
    cout <<root->infor<<" ";
}
void solve(){
    Init(root);
    int n;
    cin >>n;
    for (int i = 0;i<n;i++){
        int so;
        cin >>so;
        root = Insert(root,so);
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