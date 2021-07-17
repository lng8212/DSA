#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        {
            int k = a;
            while (k > b)
            {
                for (int i = k; i > k - b; i--)
                {
                    cout << i;
                }
                k--;
                cout << endl;
            }
        }
    int z=min (a,b);
     for (int i = 1; i <= z; i++)
    {
        {
            for (int j = b - i + 1; j >= 1; j--)
            {
                cout << j;
            }
            int S = 0;
            for (int j = 2; j <= i; j++)
            {
                S++;
            }
            if (S <= b)
            {
                for (int j = 2; j <= i; j++)
                {
                    cout << j;
                }
            }
            cout << endl;
        }
    }
    return 0;
}