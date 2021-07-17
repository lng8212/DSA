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
int sum(struct node *root)
{
    if (root == NULL)
        return 0;
     
    return sum(root->left) + root->data +
           sum(root->right);
}
 int isSumTree(struct node* node)
{
    int ls, rs;
 
    if (node == NULL ||
       (node->left == NULL &&
        node->right == NULL))
        return 1;
 
   ls = sum(node->left);
   rs = sum(node->right);

    if ((node->data == ls + rs) &&
          isSumTree(node->left) &&
          isSumTree(node->right))
        return 1;
 
   return 0;
}
void Run (){
    int n;
    cin >>n;
    node* root = NULL;
    map<int, node*> dd;
    for (int i = 0;i<n;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if (dd.find(u)==dd.end()){
            node *tmp = newNode(u);
            dd[u]=tmp;
            if (root == NULL) root = tmp;
        }
        node* Node = dd[u];
        node* ans = newNode(v);
        if (x=='L') Node->left=ans;
        else Node->right=ans;
        dd[v]=ans;
    }
    cout <<isSumTree(root)<<endl;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        Run();
    }



    return 0;
}