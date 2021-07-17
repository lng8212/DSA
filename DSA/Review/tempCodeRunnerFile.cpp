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
void Pri(node* root){
    if (root == NULL) return;   
    cout <<root->data<<" ";
    Pri(root->left);
    Pri(root->right);
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