#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        long long s = 0;
        cin >> a >> b >> c;
        while (b > 0)
        {
            if (b % 2 != 0)
                s = (s + a) % c;

            b /= 2;
            a = (2 * a) % c;
        }
        cout << s << endl;
    }

    return 0;
}