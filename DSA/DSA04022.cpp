#include <bits/stdc++.h>
using namespace std;
void cal(long long sum[20][20], long long n, long long a[20][20], long long b[20][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            for (long long k = 0; k < n; k++)
            {
                sum[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[20][20];
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        long long kq[20][20];

        for (long long i = 0; i < 20; i++)
        {
            for (long long j = 0; j < 20; j++)
            {
                if (i == j)
                    kq[i][j] = 1;
                else
                    kq[i][j] = 0;
            }
        }
        while (k > 0)
        {
            long long tmp[20][20];

            if (k % 2 != 0)
            {
                long long tmp2[20][20];
                cal(tmp2, n, kq, a);
                for (long long i = 0; i < n; i++)
                {
                    for (long long j = 0; j < n; j++)
                    {
                        kq[i][j] = tmp2[i][j] % 1000000007;
                    }
                }
            }

            k /= 2;
            cal(tmp, n, a, a);
            for (long long i = 0; i < n; i++)
            {
                for (long long j = 0; j < n; j++)
                {
                    a[i][j] = tmp[i][j] % 1000000007;
                }
            }
        }
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i+j==n-1) s+=kq[i][j]%1000000007;
            }
           
        }
        cout <<s%1000000007<<endl;
    }

    return 0;
}