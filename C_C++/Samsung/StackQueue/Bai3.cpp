#include <bits/stdc++.h>
using namespace std;
string solve (string a){
     stack<int> ans;
     string b;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]=='(') ans.push(i);
            else if (a[i]==')'){
                if (ans.size()){
                    if (ans.top()==0) continue;
                    else if (a[ans.top()-1]=='+') continue;
                    else if (a[ans.top()-1]=='-'){
                        for (int j=ans.top();j<=i;j++){
                            if (a[j]=='+') a[j]='-';
                            else if (a[j]=='-') a[j]='+';
                        }
                    } 
                    ans.pop(); 
                }
            }
        }
        for (int i=0;i<a.size();i++){
            if (a[i]!='(' && a[i]!=')') b.push_back(a[i]);
        }
        return b;
  }
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string a;
        cin >> a;
        string b;
        cin >>b;
        if (solve(a)==solve(b)) cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }

    return 0;
}