#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        stack<char> ans;
        for (int i = 0; i < a.size(); i++)
        {
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9'))
            {
                cout << a[i];
            }
            else if (a[i] == '(')
                ans.push('(');
            else if (a[i] == ')')
            {
                while (ans.size() > 0 && ans.top()!='(')
                {
                    cout << ans.top();
                    ans.pop();
                }
                ans.pop();
            }
            else
            {
                while (!ans.empty() && prec(a[i]) <= prec(ans.top()))
                {
                    cout <<ans.top();
                    ans.pop();
                    
                }
                ans.push(a[i]);
            }
        }
        while (ans.size()>0){
            cout <<ans.top();
            ans.pop();
        }
        cout <<endl;
    }
    return 0;
}