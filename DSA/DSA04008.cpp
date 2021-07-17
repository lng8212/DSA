#include <bits/stdc++.h>

using namespace std;
void cal(long long sum[2][2], long long a[2][2], long long b[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (long long i = 0; i < 2; i++)
    {
        for (long long j = 0; j < 2; j++)
        {
            for (long long k = 0; k < 2; k++)
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
        int n;
        cin >> n;
        long long f[2][2] = {{1, 1}, {1, 0}};
        if (n == 0)
            cout << 0 << endl;
        else if (n==1) cout <<1<<endl;
        else if (n==2) cout << 1<<endl;
        else
        {
            int k = n - 1;
            long long kq[2][2] = {{1, 0}, {0, 1}};
            while (k > 0)
            {
                long long tmp[2][2];

                if (k % 2 != 0)
                {
                    long long tmp2[2][2];
                    cal(tmp2, kq, f);
                    for (long long i = 0; i < 2; i++)
                    {
                        for (long long j = 0; j < 2; j++)
                        {
                            kq[i][j] = tmp2[i][j] % 1000000007;
                        }
                    }
                }

                k /= 2;
                cal(tmp, f, f);
                for (long long i = 0; i < 2; i++)
                {
                    for (long long j = 0; j < 2; j++)
                    {
                        f[i][j] = tmp[i][j] % 1000000007;
                    }
                }
            }
            cout << kq[0][0]% 1000000007<< endl;
        }
    }

    return 0;
}