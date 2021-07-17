#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout  << ((a / (__gcd(a, b))) * b)<<" "<< __gcd(a, b) <<endl;
    }
}
