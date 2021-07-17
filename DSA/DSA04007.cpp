#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >>k;
        string a, b;
        cin >> a >> b;
        while (a.size() < b.size())
        {
            a = "0" + a;
        }
        while (b.size() < a.size())
        {
            b = "0" + b;
        }
        if (b > a)
            swap(a, b);
        string c;
        c.resize(a.size());
        int carry = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int tmp = (a[i] - '0') + (b[i] - '0') + carry;
            carry = 0;
            if (tmp >= k)
            {
                carry++;
                tmp = tmp % k;
            }
            c[i] = tmp + '0';
        }
        if (carry>0) cout <<carry;
        for (int i = 0;i<c.size();i++){
            cout <<c[i];
        }
        cout <<endl;
    }

    return 0;
}