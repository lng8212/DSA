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
bool isLeaf(node *node)
{
   if (node == NULL)
       return false;
   if (node->left == NULL && node->right == NULL)
       return true;
   return false;
}
int leftLeavesSum(node *root)
{

    int res = 0;
 
 
    if (root != NULL)
    {
    
       if (isLeaf(root->right))
            res += root->right->data;
       else 
            res += leftLeavesSum(root->right);
 
      
       res += leftLeavesSum(root->left);
    }
 

    return res;
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
    cout <<leftLeavesSum(root)<<endl;

    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}