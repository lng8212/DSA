#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int dem = t+1;
    int a[60][60];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= dem; i++)
    {
        string z;
        getline(cin,z);
        for (int j = 0; j < z.size(); j++)
        {
            int k = 0;
            while (z[j] != ' ' && j < z.size())
            {
                k = k * 10 + (z[j] - '0');
                j++;
            }
            a[i-1][k] = 1;
        }
    }
    for (int i = 1; i < 60; i++)
    {
        for (int j = 1; j < 60; j++)
        {
            if (a[i][j] == 1)
                cout << i << " " << j << endl;
            a[i][j] = 0;
            a[j][i] = 0;
        }
    }

    return 0;
}