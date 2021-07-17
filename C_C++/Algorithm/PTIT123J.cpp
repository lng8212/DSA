#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tmp;
    while (1)
    {
        getline(cin,tmp);
        if (tmp == ".")
            break;
        stack<char> a;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] == '[' || tmp[i] == '(')
            {
                a.push(tmp[i]);
            }
            if (tmp[i] == ']')
            {
                if (!a.empty() && a.top() == '[')
                {
                    a.pop();
                }
                else
                    a.push(tmp[i]);
            }
            if (tmp[i] == ')')
            {
                if (!a.empty() && a.top() == '(')
                {
                    a.pop();
                }
                else
                    a.push(tmp[i]);
            }
        }
        if (!a.empty())
            cout << "no";
        else
            cout << "yes";
         cout <<endl;
    }
    
}