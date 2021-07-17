void Show(Tree root){
    if (root == NULL) return;
    Show(root->left);
    Show(root->right);
    cout <<root->data<<" ";
}
void Solve(){
    Init(root);
    int n;
    cin >>n;
    for (int i = 0;i<n;i++){
        int so;
        cin>>so;
        root = Insert(root,so);
    }
    Show(root);
    cout <<endl;
}
int main (){


    int t;
    cin >>t;
    while (t--){
        Solve();
    }



    return 0;
}