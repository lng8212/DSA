#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s1 = 0;
    long long s2 = 1;
    long long s3;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s3 = s1 + s2;
            s1 = s2;
            s2 = s3;
        }
        cout << s3;
    }
    return 0;
}