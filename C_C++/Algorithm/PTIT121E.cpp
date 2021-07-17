#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> a;
    string tmp;
    getline(cin, tmp);
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i] == 'C')
            a.push(12);
        if (tmp[i] == 'H')
            a.push(1);
        if (tmp[i] == 'O')
            a.push(16);
        if (tmp[i] >= '2' && tmp[i] <= '9')
        {
            int S = a.top();
            a.pop();
            a.push(S * (tmp[i] - 48));
            ;
        }
        if (tmp[i] == '(')
            a.push(0);
        if (tmp[i] == ')')
        {
            int S = 0;
            while (a.top() != 0)
            {
                S = S + a.top();
                a.pop();
            }
            a.pop();
            a.push(S);
        }
    }
    int suz = 0;
    while (!a.empty())
    {
        suz = suz + a.top();
        a.pop();
    }
    cout << suz;
    return 0;
}