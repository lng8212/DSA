#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        while (b.size() < a.size())
        {
            b = "0" + b;
        }
        while (a.size() < b.size())
        {
            a = "0" + a;
        }
        string c;
        c.resize(a.size());
        int carry = 0;
        for (int i = c.size() - 1; i >= 0; i--)
        {
            int n1 = a[i] - '0' + carry;
            int n2 = b[i] - '0';
            carry = 0;
            int k = n1 + n2;
            if (k >= 10)
            {
                carry++;
                k -= 10;
            }
            c[i] = k + '0';
        }
        if (carry > 0)
            cout << carry;
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i];
        }
        cout << endl;
    }

    return 0;
}