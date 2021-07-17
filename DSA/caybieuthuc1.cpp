#include<bits/stdc++.h>
using namespace std;


struct et{
    char value;
    et* left;
    et* right;
};

bool isOperator(char c){
    if (c=='+' || c=='-' || c=='*'|| c=='/' || c=='^') return true;
    return false;
}

void inorder(et *t){
    if (t!=0){
        inorder(t->left);
        cout <<t->value<<"";
        inorder(t->right);
    }
}
et* newNode(char v)
{
    et *temp = new et;
    temp->left = temp->right = NULL;
    temp->value = v;
    return temp;
}
et* constructTree(string a)
{
    stack<et *> st;
    et *t, *t1, *t2;
 
    for (int i=0; i<a.size(); i++)
    {
        if (!isOperator(a[i]))
        {
            t = newNode(a[i]);
            st.push(t);
        }
        else 
        {
            t = newNode(a[i]);
 
          
            t1 = st.top(); 
            st.pop();      
            t2 = st.top();
            st.pop(); 
            t->right = t1;
            t->left = t2;
            st.push(t);
        }
    }
 
  
    t = st.top();
    st.pop();
 
    return t;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        et* x = constructTree(a);
        inorder(x);
        cout <<endl;
    }


    return 0;
}