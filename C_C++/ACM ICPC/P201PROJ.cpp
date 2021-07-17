#include <bits/stdc++.h>
using namespace std;
bool check(string c)
{
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] != '9')
            return 0;
    }
    return 1;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a;
        string b;
        cin >> a >> b;
        if (check(b) == 1)
        {
            cout << a * b.size() << endl;
        }
        else
            cout << a * (b.size() - 1 )<< endl;
    }
    return 0;
}