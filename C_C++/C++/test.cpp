#include <bits/stdc++.h>
using namespace std;

vector<long long> a;
void solvez(long long n)
{
    long long mu = 1;
    while (n / 2 > 0)
    {
        mu *= 2;
        a.push_back(mu);

        n /= 2;
    }
}
long long kqz(long long k, long long n, long long pos)
{
    if (k % 2 == 1)
        return 1;

    if (k == a[pos])
        return n % 2;
    else if (k < a[pos])
        kqz(k, n / 2, pos - 1);
    else if (k > a[pos])
        kqz(2 * a[pos] - k, n / 2, pos - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r;
        cin >> n >> l >> r;
        if (n == 1)
            cout << 1 << endl;
        else if (n < 1)
            cout << 0 << endl;
        else
        {
            a.clear();
            solvez(n);
            cout << a.size();
            long long ans = 0;
            for (int i = l; i <= r; i++)
            {
                ans += kqz(i, n, (a.size() - 1));
            }
            cout << ans << endl;
        }
    }

    return 0;
}