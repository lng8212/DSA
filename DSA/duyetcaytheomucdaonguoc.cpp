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
int height(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
        {
            return(lheight + 1);
        }
        else {
          return(rheight + 1);
        }
    }
}
void printCurrentLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}
 
void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = h; i >= 1; i--)
        printCurrentLevel(root, i);
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
    printLevelOrder(root);
    cout <<endl;

    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}