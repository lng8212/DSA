#include <bits/stdc++.h>
using namespace std;
int szo = 0;
int dem(long long n)
{
    int S = 0;
    while (n % 10 == 0 && n > 0)
    {
        S++;
        n /= 10;
    }
    szo = n % 10;
    return S;
}
int main()
{
    long long n;
    cin >> n;
    int k;
    cin >> k;
    long long tmp =n;
    k = k - dem(n);
    if (k <= 0)
    {
        cout << n;
    }
    else
    {
        if (szo == 2 || szo == 4 || szo == 6 || szo == 8)
        {
            n = n * 5;
            k--;
        }
        else if (szo == 5)
        {
            n = n * 2;
            k--;
        }
        if (k > 0)
        {
            for (int i = 0; i < k; i++)
            {
                n=n*10;
            }
        }
        if ((n/2)%tmp==0) n/=2;
        cout <<n;
    }

    return 0;
}