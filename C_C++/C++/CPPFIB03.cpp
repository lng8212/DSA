#include <bits/stdc++.h>
using namespace std;
long long F[41];
void process()
{
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 40; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    F[2]=-1;
}
int main()
{
    process();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j <= 40; j++)
                {
                    if (a[i] == F[j])
                        cout << a[i] << ' ';

                }
            }
        cout << endl;
    }

    return 0;
}