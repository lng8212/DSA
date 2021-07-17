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
int isIdentical(node* root1, node* root2)
{
    // Check if both the trees are empty
    if (root1 == NULL && root2 == NULL)
        return 1;
    // If any one of the tree is non-empty
    // and other is empty, return false
    else if (root1 != NULL && root2 == NULL)
        return 0;
    else if (root1 == NULL && root2 != NULL)
        return 0;
    else { // Check if current data of both trees equal
        // and recursively check for left and right subtrees
        if (root1->data == root2->data && isIdentical(root1->left, root2->left)
            && isIdentical(root1->right, root2->right))
            return 1;
        else
            return 0;
    }
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
    int n2;
    cin >>n2;
    node *root2 = NULL;
    map<int, node*> dd1;
    for (int i = 0;i<n2;i++){
        int u,v;
        char x;
        cin >>u>>v>>x;
        if(dd1.find(u)==dd1.end()){
            node *tmp = newNode(u);
            dd1[u]=tmp;
            if(root2==NULL) root2 = tmp;
        }
        node *Node = dd1[u];
        node *ans = newNode(v);
        if (x=='L') Node->left=ans;
        else Node->right=ans;
        dd1[v]=ans;
    }
    cout <<isIdentical(root,root2)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}