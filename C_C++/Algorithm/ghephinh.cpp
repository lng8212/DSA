#include <bits/stdc++.h>
using namespace std;
struct hcn
{
    long long a;
    long long b;
};
int main()
{
    hcn n[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i].a >> n[i].b;
    }
    long long S = 0;
    for (int i = 0; i < 3; i++)
    {
        S = S + n[i].a * n[i].b;
    }
    long long k = (long long)(sqrt(S));
    if (k * k != S)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (n[i].a > n[i].b)
        {
            long long tmp = n[i].a;
            n[i].a = n[i].b;
            n[i].b = tmp;
        }
    }

    if (n[0].b == n[1].b && n[1].b == n[2].b && (n[0].b == k))
    {
        cout << n[0].b;
    }
    else
    {
        if (n[2].b == k)
        {
            long long tmp = n[2].a;
            n[2].a = n[0].a;
            n[0].a = tmp;
            long long tmp1 = n[2].b;
            n[2].b = n[0].b;
            n[0].b = tmp1;
        }
        if (n[1].b == k)
        {
            long long tmp = n[1].a;
            n[1].a = n[0].a;
            n[0].a = tmp;
            long long tmp1 = n[1].b;
            n[1].b = n[0].b;
            n[0].b = tmp1;
        }
        if (n[0].b == k)
        {
            n[0].a = k - n[0].a;
            if ((n[1].a == n[0].a && n[2].a == n[0].a) || (n[1].b == n[0].a && n[2].a == n[0].a) || (n[1].a == n[0].a && n[2].b == n[0].a) || n[1].b == n[0].a && n[2].b == n[0].a)
                cout << k;
            else
                cout << 0;
        }
        else cout <<0;
    }
    return 0;
}