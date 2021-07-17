#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long s = 1;
        for (long long i = 1; i <= n; i++)
        {
            if (s % i != 0)
            {
                long long k = s;
                s = (s / (__gcd(s, i))) * i;
            }
        }
        cout << s << endl;
    }
}