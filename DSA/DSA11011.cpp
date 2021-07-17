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
 
int findADepth(node *node)
{
   int d = 0;
   while (node != NULL)
   {
      d++;
      node = node->left;
   }
   return d;
}
bool isFullRec(struct node* root, int d, int level = 0)
{
    
    if (root == NULL)
        return true;
  
    if (root->left == NULL && root->right == NULL)
        return true;
  
    if (root->left == NULL || root->right == NULL)
        return false;
    return isFullRec(root->left, d, level+1) &&
           isFullRec(root->right, d, level+1);
}
  
bool isFull(node *root)
{
   int d = findADepth(root);
   return isFullRec(root, d);
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
    if (isFull(root)==true) cout <<1;
    else cout <<0;
    cout <<endl; 
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}