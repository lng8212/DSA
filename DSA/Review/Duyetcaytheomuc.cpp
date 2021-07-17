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
int height(node* node){
    if (node == NULL) return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight>rheight) return lheight+1;
        else return rheight+1;
    }
}
void printCurrentLv(node* root, int level){
    if (root == NULL) return;
    if (level == 1) cout <<root->data<<" ";
    else if (level>1){
        printCurrentLv(root->left,level -1);
        printCurrentLv(root->right, level -1);
    }
}
void Pri (node* root){
    int h  = height(root);
    for (int i = 1;i<=h;i++){
        printCurrentLv(root,i);
    }
}
void Run(){
    int n;
    cin >>n;
    node* root = NULL;
    map<int, node*> dd;
    for (int i = 0;i<n;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if (dd.find(u)== dd.end()){
            node* tmp = newNode(u);
            dd[u] = tmp;
            if (root == NULL) root = tmp;
        }
        node* Node = dd[u];
        node* sub = newNode(v);
        if (x=='L') Node->left = sub;
        else Node->right = sub;
        dd[v] = sub;
    }
    Pri(root);
    cout <<endl;
}

int main (){


    int t;
    cin >>t;
    while (t--){
        Run();
    }
}