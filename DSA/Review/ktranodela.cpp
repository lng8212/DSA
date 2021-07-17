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

bool checkNode(node* root, int lv, int *leafLv){
    if (root == NULL) return true;
    if (root->left == NULL && root ->right == NULL) {
        if (*leafLv == 0) {
            *leafLv = lv;
            return true;
        }
        return (lv == *leafLv);
    }
    return checkNode(root->left, lv+1, leafLv) && checkNode(root->right,lv+1,leafLv);
}

bool ktra(node* root){
    int lv=0, leafLv=0;
    return checkNode(root,lv,&leafLv);
}

void Run(){
    int n;
    cin >>n;
    node* root = NULL;
    map< int, node*> dd;
    for (int i = 0 ;i<n;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if (dd.find(u)==dd.end()){
            node* tmp = newNode(u);
            dd[u]=tmp;
            if (root ==NULL) root = tmp;
        }
        node* Node = dd[u];
        node* sub = newNode(v);
        if (x == 'L') Node->left = sub;
        else Node->right = sub;
        dd[v]=sub;
    }
    if (ktra(root) == true) cout <<1;
    else cout <<0;
    cout <<endl;
}
int main(){

    int t;
    cin >>t;
    while (t--){
        Run();
    }

    return 0;
}