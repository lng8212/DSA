#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int> ans;

    char c;
    while (cin >> c)
    {
        if (c == '+')
        {
            int n;
            cin >> n;
            if (ans.size() < 15000)
                ans.push(n);
        }
        else
        {
            if (ans.size())
            {
                int tmp = ans.top();
                while (ans.size() && ans.top() == tmp)
                {
                    ans.pop();
                }
            }
        }
    }
    vector<int> an;
    if (ans.size())
    {
        an.push_back(ans.top());
        ans.pop();
    }
    while (ans.size())
    {
        if (ans.top() != an[an.size() - 1])
            an.push_back(ans.top());
        ans.pop();
    }
    cout << an.size() << endl;
    for (int i = 0; i < an.size(); i++)
    {
        cout << an[i] << ' ';
    }
    return 0;
}