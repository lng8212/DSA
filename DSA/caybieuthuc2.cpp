#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    string info;
    node *left = NULL, *right = NULL;
    node(string x)
    {
        info = x;
    }
};

int toInt(string s)
{
    int num = 0;
    if (s[0] != '-')
        for (int i = 0; i < s.length(); i++)
            num = num * 10 + (int(s[i]) - 48);

    else
        for (int i = 1; i < s.length(); i++)
        {
            num = num * 10 + (int(s[i]) - 48);
            num = num * -1;
        }

    return num;
}

int eval(node *root)
{

    if (!root)
        return 0;

    if (!root->left && !root->right)
        return toInt(root->info);

    int l_val = eval(root->left);

    int r_val = eval(root->right);

    if (root->info == "+")
        return l_val + r_val;

    if (root->info == "-")
        return l_val - r_val;

    if (root->info == "*")
        return l_val * r_val;

    return l_val / r_val;
}

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        
    }
}