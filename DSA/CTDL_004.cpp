#include <bits/stdc++.h>
using namespace std;

int n, k;
long long S;
int a[106];
int kq[106];
int x[106];
void init()
{
    S = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
bool check()
{
    for (int i = 1; i < k; i++)
    {
        if (kq[i] > kq[i + 1])
            return 0;
    }
    return 1;
}
void sinh(int i)
{
    for (int j = x[i-1]+1; j <= n; j++)
    {

        kq[i] = a[j];
        x[i]=j;
        if (i == k)
        {
            if (check() == 1)
            {
                S++;
            }
        }
        else
            sinh(i + 1);
    }
}

int main()
{

    init();
    sinh(1);
    cout << S;

    return 0;
}